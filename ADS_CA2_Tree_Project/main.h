#pragma once
#include <iostream>
#include <fstream>
#include <stack>

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

bool validator(std::string xmlIn) {
    std::string xml = xmlIn;
    std::stack<std::string> valStack;
    std::string currentCheck;
    while (xml.size() != 0) {
        if(!valStack.empty()) std::cout << valStack.top() << std::endl;
        //check the tag
        //get substring between < and >
        std::cout << "<: " << xml.find_first_of('<') << std::endl;
        std::cout << ">: " << (xml.find_first_of('>') + 1) << std::endl;

        currentCheck = xml.substr(xml.find_first_of('<'), (xml.find_first_of('>')+1)- (xml.find_first_of('<')));
        std::cout << "currentCheck: " << currentCheck << std::endl;
        //open tag?
        if (currentCheck.at(1) != '/') {
            valStack.push(currentCheck);
        }
        //add to stack
    //closing tag?
        else { 
            std::cout << "Closing" << std::endl;
            std::cout << valStack.top().substr(1, (valStack.top().find_first_of(">") - 1)) << std::endl;
            std::cout << currentCheck.substr(2, (currentCheck.find_first_of(">")-2)) << std::endl;
            if (valStack.top().substr(1, (valStack.top().find_first_of(">") - 1)) == currentCheck.substr(2, currentCheck.find_first_of(">")-2)) valStack.pop();
            else return false;
        };
            //take away from stack, non-matching returns false
        xml = xml.substr(xml.find_first_of(">")+1);
    }
    return valStack.empty();
}