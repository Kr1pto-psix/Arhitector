#pragma once
#include <string>
using std::string;

class Item 
{
private: 
	string name;
	
	
public:
	Item(string name);
	Item()
	{

	}
	string ToString() {
		return name;
	}

};

