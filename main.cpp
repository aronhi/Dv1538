#include <iostream>
#include <string>
using namespace std;
int main() {
	int appa;

	int sven;
	cout << "hej" << endl;
	
	
	std::string bob = "holla,2,41";
	cout<<bob.find_last_of(",")<<endl;
	std::string naaa=bob.substr(8,bob.length());
	
	std::cout<<naaa;
	getchar();
	return 0;
}