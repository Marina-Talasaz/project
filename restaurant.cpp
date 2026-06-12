#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;
#include <vector>
using std::vector;
#include <cstdlib>

#include "food.h"
#include "drink.h"
#include "costumer.h"
#include "manager.h"
#include "systemmanager.h"
#include "address.h"
#include "restaurant.h"

Restaurant::Restaurant(int id, string name, Address &add, bool status, string pn, vector <MenuItem> me, string inf)
:resId(id),resName(name),address(add),resStatus(status),phoneNumber(pn),menu(me),info(inf){
}

int getId()const{
	return resId;
}
string getName()const{
	return resName;
}
Address &getAddress()const{
	return address;
}
bool getStatus()const{
	return resStatus;
}
string getNumber()const{
	return phoneNumber;
}
vector <MenuItem> getMenu()const{
	return menu;
}
string getInfo()const{
	return info;
}
void setId(int id){
	resId=id;
}
void setName(string name){
	resName=name;
}
void setAddress(Address &);
void setStatus(bool);
void setNumber(string);
void setMenu(vector <MenuItem>);
void setInfo(string);
void addToMenu(MenuItem &);
void getOrder(Costumer &cos){
	system("cls");
	cout<<"---MENU---\n\n";
	for(int i=0 ; i<menu.size() ; i++){
		cout<<"--"<<i+1<<" "<<menu[i].getName()<<"\nID: "<<menu[i].getId()<<"\n"<<menu[i].getInfo()
			<<"\nprice (for the smalest size): "<<menu[i].getPPrice()<<"\n\n";
	}
	int order=0;
	while(1){
		cout<<" total: "<<cos.getTotal();
		cout<<"\nEnter the number of what you want to order,if your order is done , enter -1:\n";
		cin>>order;
		while(order<=0 || order>menu.size()){
			if(order!=-1){
				cout<<"Enter again:\n";
				cin>>order;
			}
		}
		
		if(order!=-1){
			if(menu[order-1].getType=="food"){
				int size;
				cout<<"Do you want the small size (enter 1) or the large size (enter 2):\n";
				cin>>size;
				while(size!=1 && size!=2){
					cout<<"Enter again:\n";
					cin>>size;
				}
				menu[order-1].setSize(size);
				
				int sause;
				cout<<"Do you want any extra sauce? enter the number of extra sauce that you want, if none enter 0:\n";
				cin>>sauce;
				menu[order-1].setSauce(sauce);
				
				double p=menu[order-1].calculatePrice()
				total+=p;
				cos.addToCart(menu[order-1],p);//ham item ra be cart ezafe mikonad ham gheymat ra be cartPrice
			}
			else{
				double v;
				cout<<"Do you want 0.5 litres or 1.5 litres :\n";
				cin>>v;
				while(v!=1.5 && v!=0.5){
					cout<<"Enter again:\n";
					cin>>v;
				}
				menu[order-1].setVolume(v);
				total+=menu[order-1].calculatePrice();
				cos.addToCart(menu[order-1]);//ke toosh gheymat ham mizare tooye vector  motenazer
			}
		}
		else{
			while(1){
				system("cls");
				cos.showCart();
				cout<<" total: "<<cos.getTotal();
				int remove;
				cout<<"If you want to remove any item,enter the number, when you're dome enter -1:\n";
				cin>>remove;
				while(remove<=0 || remove>cos.getCart().size()){
					if(remove!=-1){
						cout<<"Enter again:\n";
						cin>>remove;
					}
				}
				if(remove!=-1){
					cos.deleteFromCart(remove);//ke toosh gheymat ham az total kam mikone
				}
				else{
					break;
				}
			}
		}
		break;
		
	}
	cos.pay();
	
}


