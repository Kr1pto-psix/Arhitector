#pragma once
#include <string>
using std::string;

class Item 
{
private: 
	string name;
	string icon;
	string comand;
	
	
public:
	Item(string name, string icon, string comand);
	Item()
	{

	}
	string getName() {
		return name;
	}
	string getIcon() {
		return icon;
	}
	string getComand() {
		return this->comand;
	}
	void setName(string name) {
		this->name = name;
	}
	void setIcon(string icon) {
		this->icon = icon;
	}
	void setComand(string comand) {
		this->comand = comand;
	}
};

