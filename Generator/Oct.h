#pragma once
#include <iostream>
#include <string>
using namespace std;
class Oct {
	private: 
		string Name;
		string Value;
	public: 
		Oct(string, string);
		void  setName(string);
		void  setValue(string);
		string getName();
		string getValue();
};
