#pragma once
#include <iostream>
#include <fstream>

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
    return 0;
}