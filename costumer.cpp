#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
#include <vector>
using std::vector;

#include "food.h"
#include "drink.h"
#include "costumer.h"
#include "address.h"
#include "restaurant.h"

Costumer::Costumer(string n):name(n){
}

void addToCart(MenuItem &);
void deleteFromCart(MenuItem &);
void costumerMainPage(vector <Restaurant> r){
	for(int i=0; i< r.size(); i++){
		cout<<"RESTAURANTS:\n\n"<<i+1<<"----"<<r[i].getName()<<"\n"<<r[i].getId()<<"\naddress: "
		<<r[i].getAddress().printAddress()<<"\n";
	}
	cout<<"Pick a restaurant(enter the number of that restaurant):\n";
	int restNo;
	cin>>restNo;
	while(restNo<=0 || restNo>r.size()){
		cout<<"Enter again:\n";
		cin>>restNo;
	}
	r[restNo-1].getOrder();
	
	
}

