#include <iostream>
#include <string>
#include "ReadFromFile.h"
#include "scheduling.h"
using namespace std;

//void ReadFromFile(string fileLocation, string array[], )

int main() {
	int nrOf = 0;
	std::string file1 = "Operationer_1a.txt";
	int sven;
	
	
	std::string bob = "holla,2,41";
	cout<<bob.find_last_of(",")<<endl;
	std::string naaa=bob.substr(8,bob.length());
	
	//std::cout<<naaa;



	
	string *operations = new string[30];
	
	ReadFromFile fileToRead(file1, operations,nrOf);

	
	for (int i = 0; i < nrOf; i++)
	{
		cout << operations[i] << endl;

	}
	int opentimes[2];
	//tid med miniräknare i minuter
	opentimes[0] = 540;
	opentimes[1] = 540;
	opentimes[2] = 540;

	
	scheduling upg1(opentimes, 3);
	upg1.schedulingUpg1(operations, 1, nrOf);
	cout << upg1.getOperationsAsString() << endl;

	
	

	getchar();

	return 0;
}

