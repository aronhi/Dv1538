#include "ReadFromFile.h"


ReadFromFile::ReadFromFile(std::string fileLocation, std::string * arrayOfName[], int nrOf)
{
	int counter = 0;
	std::ifstream file;
	file.open(fileLocation);
	while (getline(file,* arrayOfName[counter])) {
		counter++;
	}
}

ReadFromFile::~ReadFromFile()
{
}
