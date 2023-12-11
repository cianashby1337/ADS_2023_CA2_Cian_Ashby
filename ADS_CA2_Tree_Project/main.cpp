#include <iostream>
#include "main.h"
#include "Tree.h"
#include "File.h"

int main() {
	std::string fileName = "../../vs_sample.xml";
	std::string xmlContents = readFile(fileName);
	Tree<File>* testTree = createFileSystem(xmlContents);
	TreeIterator<File> treeIter(testTree);
	int choiceInt;
	bool running = true;
	std::string choiceString;
	while (running) {
		std::cout << "\n" << findWorkingDirectory(treeIter.node) << std::endl;
		std::cout << displayContents(treeIter.node) << std::endl;
		std::cin >> choiceInt;
		if (choiceInt == 0) {
			std::cout << "\nChoose an action from below" << std::endl;
			std::cout << "0. Move up a level" << std::endl;
			std::cout << "1. Search for a file/folder" << std::endl;
			std::cout << "2. Calculate memory usage" << std::endl;
			std::cout << "3. Count files/folders in current directory" << std::endl;
			std::cout << "4. Prune tree" << std::endl;
			std::cout << "5. Exit Program" << std::endl;

			std::cin >> choiceInt;

			std::cout << std::endl;
			if (choiceInt == 0) {
				if (treeIter.node->parent != nullptr) treeIter.up();
				else std::cout << "You cannot move up past the root directory" << std::endl;
			}
			else if (choiceInt == 1) {
				std::cout << "Enter the name of the file" << std::endl;
				std::cin >> choiceString;
				std::cout << findSearchItem(treeIter, choiceString) << std::endl;
			}
			else if (choiceInt == 2) 
				std::cout << "Total memory usage within the current directory:" << sumDirectoryMemoryUsage(treeIter.node) << " b" << std::endl;
			else if (choiceInt == 3) 
				std::cout << "Number of entities in current directory tree:" << countWithinDirectory(treeIter.node) << std::endl;
			else if (choiceInt == 4) 
				std::cout << "Under Construction" << std::endl;
			else if (choiceInt == 5)
				running = !running;
			else 
				std::cout << choiceInt << " is not a valid option, please try again" << std::endl;
		}
		else {
			if (choiceInt - 1 >= treeIter.node->children->count) std::cout << "No" << std::endl;
			else {
				treeIter.childStart();
				for (int i = 0; i < choiceInt-1; i++) treeIter.childIter.advance();

				if (treeIter.childIter.currentNode->data->data.isDirectory) treeIter.down();
				else std::cout << "You cannot navigate into a file" << std::endl;
			}
		}
	}
	return 0;
}