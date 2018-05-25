#include <iostream>
#include <string>
#include "ReadFromFile.h"
#include "scheduling.h"
#include <ctime>
using namespace std;

//void ReadFromFile(string fileLocation, string array[], )

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	clock_t start;
	clock_t end;
	int nrOf1A = 0;
	int nrOf1B = 0;
	int nrOf2 = 0;
	std::string file1 = "Operationer_1a.txt";
	std::string file2 = "Operationer_1b.txt";
	std::string file3 = "Operationer_2.txt";





	string *operations1A = new string[30];
	string *operations1B = new string[30];
	string *operations2 = new string[50];
	ReadFromFile fileToRead(file1, operations1A, nrOf1A);
	ReadFromFile fileToRead1B(file2, operations1B, nrOf1B);
	ReadFromFile fileToRead2(file3, operations2, nrOf2);

	//tid med miniräknare i minuter
	int opentimes1[3] = { 540 ,540,540 };
	int opentimes2[6] = { 660,660,840,840,540,540 };



	scheduling upg1(opentimes1, 3);
	scheduling upg2(opentimes2, 6);
	cout << "Operation 1 a" << endl;

	start = clock();
	upg1.schedulingOrder(operations1A, 1, nrOf1A);
	cout << upg1.getOperationsAsString() << endl;


	upg1.schedulingOrder(operations1A, 2, nrOf1A);
	cout << upg1.getOperationsAsString() << endl;

	upg1.schedulingOrder(operations1A, 3, nrOf1A);
	cout << upg1.getOperationsAsString() << endl;
	end = clock();

	cout << end - start << endl;

	getchar();

	cout << "Operation 1 b" << endl;
	start = clock();
	upg1.schedulingOrder(operations1B, 1, nrOf1B);
	cout << upg1.getOperationsAsString() << endl;


	upg1.schedulingOrder(operations1B, 2, nrOf1B);
	cout << upg1.getOperationsAsString() << endl;

	upg1.schedulingOrder(operations1B, 3, nrOf1B);
	cout << upg1.getOperationsAsString() << endl;

	end = clock();

	cout << end - start << endl;
	getchar();
	cout << "Operation 2" << endl;
	start = clock();
	upg2.schedulingOrder(operations2, 1, nrOf2);
	cout << upg2.getOperationsAsString() << endl;


	upg2.schedulingOrder(operations2, 2, nrOf2);
	cout << upg2.getOperationsAsString() << endl;

	upg2.schedulingOrder(operations2, 3, nrOf2);
	cout << upg2.getOperationsAsString() << endl;
	end = clock();

	cout << end - start << endl;


	
	delete[] operations1A;
	delete[] operations1B;
	delete[] operations2;
	

	getchar();

	return 0;
}

