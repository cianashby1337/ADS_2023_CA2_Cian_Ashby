#include <iostream>
#include "main.h"

int main() {
	std::cout << "Beginning Tree project" << std::endl;
	std::string expectedString = "<dir><name>beep</name>";
	std::cout << validator(expectedString) << std::endl;
	return 0;
}