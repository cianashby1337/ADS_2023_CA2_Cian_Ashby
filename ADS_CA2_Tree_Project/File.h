#pragma once
struct File {
	bool isDirectory;
	std::string name;
	std::string type;
	int length;

	File() {
		this->isDirectory = isDirectory;
		this->type = "-directory-";
		this->length = 0;
	}

	File(bool isDirectory) { 
		this->isDirectory = isDirectory;
		if (isDirectory) {
			this->type = "-directory-";
			this->length = 0;
		}
	}
};