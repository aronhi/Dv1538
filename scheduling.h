#ifndef SCHEDULING_H
#define SCHEDULING_H
#include <string>

using namespace std;

class scheduling {
private:
	class Operations {
	public:
		string operationNr[15];
		int nrOfOperations;
		int time;
		int openTime;
		Operations* next;
		Operations(int openTime, Operations* next = nullptr)
		{
			this->nrOfOperations = 0;
			this->time = 0;
			this->openTime = openTime;
			this->next = next;

		}
		~Operations() {}

	};
	
	int nrOfRooms;
	Operations* first;

public:

	scheduling(int openTimes[], int nrOfRooms);
	~scheduling();

	void schedulingOrder(std::string * arrayOfName, int nrJumps, int nrOf);
	string getOperationsAsString()const;
	void emptyOperations();

};




#endif