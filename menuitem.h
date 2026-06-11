#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>
using std::string;

class MenuItem{
	protected:
		string Id;
		string name;
		string info;
		double primaryPrice;
		string type;
		bool availibility;
		int status;
		
	public:
		virtual double calculatePrice() const =0;
		string getId()const;
		string getName()const;
		string getInfo()const;
		double getPrice()const;
		string getType()const;
		bool getAvailibility()const;
		int getStatus()const;
		void setId(string);
		void setName(string)const;
		void setInfo(string)const;
		void setPrice(double)const;
		void setType(string)const;
		void setAvailibility(bool)const;
		void setStatus(int)
		
		
};
#endif
