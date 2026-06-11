#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
using std::string;
#include <vector>
using std::vector;

#include "user.h"
#include "menuitem.h"

class Restaurant{
	private:
		int resId;
		string resName;
		Address address;
		bool resStatus;
		string phoneNumber;
		vector <MenuItem> menu;
		string info;
		
	public:
		Restaurant(int,string,Address &,bool,string,string,vector <MenuItem>);
		int getId()const;
		string getName()const;
		Address &getAddress()const;
		bool getStatus()const;
		string getNumber()const;
		vector <MenuItem> getMenu()const;
		string getInfo()const;
		void setId(int);
		void setName(string);
		void setAddress(Address &);
		void setStatus(bool);
		void setNumber(string);
		void setMenu(vector <MenuItem>);
		void setInfo(string);
		void addToMenu(MenuItem &);
		void getOrder();
		
};
#endif
