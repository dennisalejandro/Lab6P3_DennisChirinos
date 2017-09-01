#pragma once
#include "Numero.h"
#include <iostream>
#include <string>
using namespace std;
class Binario : public Numero {
	private: 
		string Name;
		int Value;
	public: 
		Binario(string);
		void  setName(string);
		void  setValue(string);
		string getName();
		int getValue();
};
