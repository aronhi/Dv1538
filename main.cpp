#include <iostream>
#include <string>
#include<fstream>
using namespace std;

int main() {
	int appa;

	int sven;
	cout << "hej" << endl;
	
	
	std::string bob = "holla,2,41";
	cout<<bob.find_last_of(",")<<endl;
	std::string naaa=bob.substr(8,bob.length());
	
	std::cout<<naaa;

	int counter = 0;


	ifstream file;
	file.open("/Projektuppgiften/Operationer_1a.txt");
	string operations[30];
	while (getline(file, operations[counter])) {

		counter++;


	}
	cout << operations[0];
	getchar();

	return 0;
}