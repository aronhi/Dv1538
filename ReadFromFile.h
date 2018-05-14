#ifndef READFROMFILE
#define READFROMFILE
#include<fstream>
#include <string>
class ReadFromFile
{
public:
	ReadFromFile(std::string fileLocation, std::string * arrayOfName[],int nrOf);
	~ReadFromFile();

private:

};
#endif
