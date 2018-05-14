#include <iostream>
#include <string>
#include "ReadFromFile.h"
using namespace std;

int main() {
	int appa;
	std::string file1 = "Projektuppgiften/Operationer_1a.txt";
	int sven;
	cout << "hej" << endl;
	
	
	std::string bob = "holla,2,41";
	cout<<bob.find_last_of(",")<<endl;
	std::string naaa=bob.substr(8,bob.length());
	
	std::cout<<naaa;



	
	string *operations[30];
	
	ReadFromFile fileToRead(file1,operations,30);
	cout << operations[0];
	getchar();

	return 0;
}