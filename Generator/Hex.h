#pragma once
#include <iostream>
#include <string>
using namespace std;
class Hex {
	private: 
		string Name;
		string Value;
	public: 
		Hex(string, string);
		void  setName(string);
		void  setValue(string);
		string getName();
		string getValue();
};
