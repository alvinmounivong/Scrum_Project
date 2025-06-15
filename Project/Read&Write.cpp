#include <iostream>
#include <fstream>
#include <string>

void writeToFile(const std::string& filename, const std::string& content) {
	std::ofstream outFile(filename);
	if (outFile.is_open()) {
		outFile << content;
		outFile.close();
		std::cout << "Successfully wrote to " << filename << std::endl;
	} else {
		std::cerr << "Unable to open file for writing: " << filename << std::endl;
	}
}

std::string readFromFile(const std::string& filename) {
	std::ifstream inFile(filename);
	if (inFile.is_open()) {
		std::string content((std::istreambuf_iterator<char>(inFile)),
							std::istreambuf_iterator<char>());
		inFile.close();
		return content;
	} else {
		std::cerr << "Unable to open file for reading: " << filename << std::endl;
		return "";
	}
}

int main() {
	std::string filename = "output.txt";
	std::string content = "testing";
	
	writeToFile(filename, content);
	
	std::string readContent = readFromFile(filename);
	if (!readContent.empty()) {
		std::cout << "File content read: \n" << readContent << std::endl;
	}
	
	return 0;
}