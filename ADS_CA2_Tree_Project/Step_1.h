#pragma once
#include <iostream>
#include <fstream>
#include <stack>
#include <string>
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
        if(!valStack.empty()) std::cout << valStack.top() << std::endl;
        //check the tag
        //get substring between < and >
        std::cout << "<: " << xml.find_first_of('<') << std::endl;
        std::cout << ">: " << (xml.find_first_of('>') + 1) << std::endl;

        currentCheck = xml.substr(xml.find_first_of('<'), (xml.find_first_of('>')+1)- (xml.find_first_of('<')));
        std::cout << "currentCheck: " << currentCheck << std::endl;
        //open tag?
        if (currentCheck.at(1) != '/') {
            if (currentCheck == "<file>") isFolder = false;
            if (isFolder) {
                if (currentCheck == "<type>" || currentCheck == "<size>") return false;
            }
            else if (currentCheck == "<dir>") return false;
            if (first && currentCheck != "<dir>") return false;
            first = false;
            rootClosed = false;
            valStack.push(currentCheck);
        }
        //add to stack
    //closing tag?
        else { 
            if (currentCheck == "</file>") isFolder = true;
            if (valStack.top().substr(1, (valStack.top().find_first_of(">") - 1)) == currentCheck.substr(2, currentCheck.find_first_of(">")-2)) valStack.pop();
            else return false;
            std::cout << currentCheck << " - " << valStack.size() << std::endl;
            if (currentCheck == "</dir>" && valStack.empty()) rootClosed = true;
        };
        std::cout << xml << std::endl;
            //take away from stack, non-matching returns false
        xml = xml.substr(xml.find_first_of(">")+1);
    }
    return valStack.empty() && xml.size() == 0 && rootClosed;
}

Tree<File> createFileSystem(std::string xml) {
    //dir and file make a new child and go down
    //dir and file go up
    // use cout extensively for the below
    //type will return the string between it's opening and closing tags
    //size will return an int between it's opening and closing tags, minus the b
    // name will return the string between it's opening and closing tags
    // the three above should just remove the opening and closing tags and whatever is in between, all at once. So look for closing tag
    Tree<File> t(File(true));
    std::cout << t.data.isDirectory << std::endl;
    TreeIterator<File> tIter(&t);
    std::string currentCheck;
    std::string propertyStore;
    xml = xml.substr(5);
    while (!xml.empty()) {
        currentCheck = xml.substr(xml.find_first_of('<'), (xml.find_first_of('>') + 1) - (xml.find_first_of('<')));
        std::cout << currentCheck << std::endl;
        if (currentCheck == "<dir>") {
            std::cout << "Dir detected, create a dir and move down a level" << std::endl;
            tIter.prependChild(File(true));
            tIter.down();
            std::cout << "afterDirAdd" << t.data.isDirectory << std::endl;
        }
        else if (currentCheck == "</dir>") {
            std::cout << "closing Dir detected, move up a level and move child iter to next" << std::endl; 
            tIter.up();
            tIter.childForth();
        }
        else if (currentCheck == "<file>") {
            std::cout << "File detected, create a file and move down a level" << std::endl;
            tIter.prependChild(File(false));
            tIter.down();
            std::cout << "afterFileAdd" << t.data.isDirectory << std::endl;
        }
        else if (currentCheck == "</file>") {
            std::cout << "closing File detected, move up a level and move child iter to next" << std::endl;
            tIter.up();
            tIter.childForth();
        }
        else if (currentCheck == "<name>") {
            std::cout << "Name detected, get the string between the two name tags";
            xml = xml.substr(6);
            propertyStore = xml.substr(0, xml.find_first_of('<'));
            xml = xml.substr(xml.find_first_of('<'));
            tIter.node->data.name = propertyStore;
        }
        else if (currentCheck == "<type>") {
            std::cout << "type detected, get the string between the two type tags";
            xml = xml.substr(6);
            propertyStore = xml.substr(0, xml.find_first_of('<'));
            xml = xml.substr(xml.find_first_of('<'));
            tIter.node->data.type = propertyStore;
        }
        else if (currentCheck == "<length>") {
            std::cout << "length detected, convert the string between the two length tags to int";
            xml = xml.substr(8);
            propertyStore = xml.substr(0, xml.find_first_of('<'));
            xml = xml.substr(xml.find_first_of('<'));
            std::cout << propertyStore << std::endl;
            std::cout << std::stoi(propertyStore.substr(0, propertyStore.size() - 1)) << std::endl;
            tIter.node->data.length = std::stoi(propertyStore.substr(0,propertyStore.size()-1));
        }
        else if (currentCheck == "</name>" || currentCheck == "</type>" || currentCheck == "</length>") std::cout << "This closing tag should be removed by it's opening tag operation";
        xml = xml = xml.substr(xml.find_first_of(">") + 1);
    }
    return t;
}