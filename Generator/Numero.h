#pragma once
#include <iostream>
#include <string>
using namespace std;
class Numero {
	private: 
		string Name;
		int Value;
	public: 
		Numero(string);
		void  setName(string);
		void  setValue(string);
		string getName();
		int getValue();
};
