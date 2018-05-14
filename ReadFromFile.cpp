#include "ReadFromFile.h"



ReadFromFile::ReadFromFile(std::string fileLocation, std::string* &arrayOfName, int &nrOf)
{
	//string* banan = *arrayOfName;
	std::ifstream file;
	file.open(fileLocation);
	
	while (getline(file, arrayOfName[nrOf])) {
		nrOf++;

	}
	sortArray(arrayOfName, nrOf);
}

ReadFromFile::~ReadFromFile()
{
}

void ReadFromFile::sortArray(std::string *& arrayOfName, int nrOf)
{

	{
		string key, string1, string2;
		int i, j, placement1, placement2, value1, value2;
		for (i = 1; i < nrOf; i++)
		{
			key = arrayOfName[i];
			j = i - 1;

			
			placement1 = arrayOfName[j].find_last_of(",")+1;
			string1 = arrayOfName[j].substr(placement1, arrayOfName[j].length());

			placement2 = key.find_last_of(",") + 1;
			string2 = key.substr(placement2, key.length());

			value1 = atoi(string1.c_str());
			value2 = atoi(string2.c_str());

			while (j >= 0 && value1< value2)
			{
				arrayOfName[j + 1] = arrayOfName[j];
				j = j - 1;
				if (j >= 0) {
					placement1 = arrayOfName[j].find_last_of(",") + 1;
					string1 = arrayOfName[j].substr(placement1, arrayOfName[j].length());
					value1 = atoi(string1.c_str());
				}

			}
			arrayOfName[j + 1] = key;
		}
	}



	

}
