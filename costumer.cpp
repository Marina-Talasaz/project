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

vector <MenuItem> getCart()const{
	reurn cart;
}
double getTotal()const{
	return total;
}

void costumerMainPage(vector <Restaurant> r){
	system("cls");
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
	r[restNo-1].getOrder(*this);
	
	
}
void showCart()const{
	cout<<"---CART---\n\n";
	for(int i=0 ; i<cart.size() ; i++){
		cout<<"--"<<i+1<<" "<<cart[i].getName<<"   "<<cartPrice[i]<<"\n";
	}
}

void addToCart(MenuItem &m, double pr){
	cart.push_back(m);
	cartPrice.push_back(pr);
}

void deleteFromCart(int ind){
	cart.erase(cart.begin()+ind);
	total-=cartPrice[ind-1];
	cartPrice.erase(cartPrice.begin()+ind-1);
}
void pay(){
	system("cls");
	cout<<"You must pay "<<total<<"\n enter anything to pay:\n";
	string x;
	cin>>x;
	cout<<"Paying operation was successful\nThanks for choosing us.";
	exit(0);
}
