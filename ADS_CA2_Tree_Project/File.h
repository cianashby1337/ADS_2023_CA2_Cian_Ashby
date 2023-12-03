#pragma once
struct File {
	bool isDirectory;
	std::string name;
	std::string type;
	int size;

	File(bool isDirectory) { 
		this->isDirectory = isDirectory;
		if (isDirectory) {
			this->type = "-directory-";
			this->size = 0;
		}
	}
};