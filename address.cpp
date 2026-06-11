#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "address.h"

Address::Address(string c,string s,int no):city(c),street(s),buildingNo(no){
}

void Address::printAddress() const{
	cout<<city<<" , "<<street<<" , building number: "<<buildingNo<<endl;
}
