#pragma once
#include<vector>
#include <string>
#include <iostream>
using std::vector;
using std::string;
using std::cout;
using std::endl;
class Menu
{
private: 
	vector<string> items;
	
public: 
	void add(const string& item) {
		cout << "add: " << &item << endl;
		items.push_back(item);
	}
	void pringToConsole() {
		for (int i(0); i < items.size(); i++) {
			cout << '{' << i << '}' << " " << items[i] << " &: " << &items[i] << endl;
		}
	}

};

