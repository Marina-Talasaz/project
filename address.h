#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using std::string;

class Address{
	private:

	string city;
	string street;
	int buildingNo;
		
	public:
		Address(string,string,int);
		void printAddress() const;
};

#endif
