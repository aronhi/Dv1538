#include "scheduling.h"

scheduling::scheduling(int openTimes[], int nrOfRooms)
{
	Operations* walker;
	this->nrOfRooms = nrOfRooms;
	this->first = new Operations(openTimes[0]);
	walker = first;
	for (int i = 1; i < this->nrOfRooms; i++)
	{
		walker=walker->next = new Operations(openTimes[i]);

	}
}

scheduling::~scheduling()
{
}

void scheduling::schedulingUpg1(std::string * arr, int nrJumps, int nrOf)
{
	Operations* walker;
	walker = this->first;
	string stringvalue;
	int value, placement;
	string *operationArr = new string[nrOf];
	for (int i = 0; i < nrOf; i++)
	{
		operationArr[i] = arr[i];
	}
	for (int z = 0; z < nrOfRooms; z++)
	{

		for (int i = 0; i < nrOf; i=i + nrJumps)
		{
			//hittar vi värdet på nuvarnde plats i array
			placement = operationArr[i].find_last_of(",") + 1;
			stringvalue = operationArr[i].substr(placement, operationArr[i].length());
			value = atoi(stringvalue.c_str());

			if (value > 0 && value <= (walker->openTime - walker->time)) {
				//om den får plats så lägger vi till operationen

				walker->time += value;
				placement = operationArr[i].find(",");
				stringvalue = operationArr[i].substr(0, placement);
				walker->operationNr[walker->nrOfOperations] = stringvalue;
				walker->nrOfOperations++;

				operationArr[i] = "?,?,-1";
			}
		}
		walker = walker->next;
	}


}

string scheduling::getOperationsAsString() const
{
	string returnString;
	Operations* walker;
	walker = this->first;
	for (int i = 0; i < this->nrOfRooms; i++)
	{
		returnString += "Operation" + to_string(i) + ": ";
		for (int j = 0; j < walker->nrOfOperations; j++)
		{
			returnString += walker->operationNr[j] + ", ";
		}
		returnString += "Total Time left in minutes: " + to_string(walker->openTime - walker->time) + "\n";
		walker = walker->next;
	}
	return returnString;
}
