#pragma once
#include <iostream>
#include <fstream>
#include <stack>
#include <string>
#include <queue>
#include "Tree.h"
#include "TreeIterator.h"
#include "File.h"

std::string readFile(std::string filePath) {
    std::ifstream inFileStream(filePath);
    std::string output = "";
    if (inFileStream.good()) {
        while (!inFileStream.eof()) {
            //removing by ascii values under 33 puts input in one line
            if (inFileStream.peek() > 32) output += inFileStream.peek();
            inFileStream.get();
        }
        inFileStream.close();
        return output;
    }
    else std::cout << "Unable to open file, or file is empty.";
}

bool validator(std::string xml) {
    bool first = true, rootClosed = true;
    std::stack<std::string> valStack;
    std::string currentCheck;
    bool isFolder = true;
    while (first && !xml.empty() || !valStack.empty() && !xml.empty()) {
        currentCheck = xml.substr(xml.find_first_of('<'), (xml.find_first_of('>')+1)- (xml.find_first_of('<')));
        if (currentCheck.at(1) != '/') {
            if (currentCheck == "<file>") isFolder = false;
            if (isFolder) {
                if (currentCheck == "<type>" || currentCheck == "<size>") return false;
            }
            else if (currentCheck == "<dir>" || first && currentCheck != "<dir>") return false;
            first = rootClosed = false;
            valStack.push(currentCheck);
        }
        else { 
            if (currentCheck == "</file>") isFolder = true;
            if (valStack.top().substr(1, (valStack.top().find_first_of(">") - 1)) == currentCheck.substr(2, currentCheck.find_first_of(">")-2)) valStack.pop();
            else return false;
            if (currentCheck == "</dir>" && valStack.empty()) rootClosed = true;
        };
        xml = xml.substr(xml.find_first_of(">")+1);
    }
    return valStack.empty() && xml.size() == 0 && rootClosed;
}

Tree<File>* createFileSystem(std::string xml) {
    Tree<File>* t = new Tree<File>(File(true));
    TreeIterator<File> tIter(t);
    std::string currentCheck, propertyStore;
    xml = xml.substr(5);
    while (!xml.empty()) {
        currentCheck = xml.substr(xml.find_first_of('<'), (xml.find_first_of('>') + 1) - (xml.find_first_of('<')));
        if (currentCheck == "<dir>" || currentCheck == "<file>") {
            currentCheck == "<dir>" ? tIter.prependChild(File(true)) : tIter.prependChild(File(false));
            tIter.down();
        }
        else if (currentCheck == "</dir>" || currentCheck == "</file>") {
            tIter.up();
            tIter.childForth();
        }
        else if (currentCheck == "<name>" || currentCheck == "<type>" || currentCheck == "<length>") {
            xml = currentCheck == "<length>" ? xml.substr(8) : xml.substr(6);
            propertyStore = xml.substr(0, xml.find_first_of('<'));
            xml = xml.substr(xml.find_first_of('<'));
            if (currentCheck == "<name>") tIter.node->data.name = propertyStore;
            else if (currentCheck == "<type>") tIter.node->data.type = propertyStore;
            else tIter.node->data.length = std::stoi(propertyStore.substr(0, propertyStore.size() - 1));
        }
        else if (currentCheck == "</name>" || currentCheck == "</type>" || currentCheck == "</length>") std::cout << "This closing tag should be removed by it's opening tag operation";
        xml = xml = xml.substr(xml.find_first_of(">") + 1);
    }
    return t;
}

std::string findWorkingDirectory(Tree<File>* t, std::string str = "Current Working Directory: ") {
    if (t->parent != nullptr) str = findWorkingDirectory(t->parent, str);
    str += t->data.name + "/";
    return str;
}

std::string displayContents(Tree<File>* t) {
    std::string output = "Enter 0 to view actions, or choose an option below:\n";
    int count = 1;
    DListIterator<Tree<File>*> tChildIter = t->children->getIterator();
    while (tChildIter.isValid()) {
        File currentNode = tChildIter.currentNode->data->data;
        if (currentNode.isDirectory) output.append(std::to_string(count) + ". " + currentNode.name + "\n");
        else output.append(std::to_string(count) + ". " + currentNode.name + " - " + std::to_string(currentNode.length) + "b\n");
        tChildIter.advance();
        count++;
    }
    return output;
}

int countWithinDirectory(Tree<File>* t, Tree<File>* callingDirectory) {
    int c = 1;
    DListIterator<Tree<File>*> childIter = t->children->getIterator();
    while (childIter.isValid())
    {
        c += countWithinDirectory(childIter.currentNode->data, callingDirectory);
        childIter.advance();
    }
    if(t == callingDirectory) return --c; // decrement as we're concerned about what it within, not including, the calling directory
    return c;
}

int sumDirectoryMemoryUsage(Tree<File>* t) {
    int count = 0;
    std::queue <Tree<File>*> q;
    q.push(t);
    while (!q.empty())
    {
        if(!q.front()->data.isDirectory) count += q.front()->data.length;
        if (q.front()->children->getIterator().isValid())
        {
            DListIterator<Tree<File>*> iter = q.front()->children->getIterator();

            while (iter.isValid())
            {
                q.push(iter.item());
                iter.advance();
            }

        }
        q.pop();
    }
    return count;
}