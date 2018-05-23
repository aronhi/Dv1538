 #ifndef READFROMFILE_H
#define READFROMFILE_H
#include<fstream>
#include <string>
using namespace std;
class ReadFromFile
{
public:
	ReadFromFile(std::string fileLocation, std::string* &arrayOfName,int &nrOf);
	~ReadFromFile();
	void sortArray(std::string* &arrayOfName, int nrOf);

private:
	string fileLocation;
	std::ifstream file;
};
#endif