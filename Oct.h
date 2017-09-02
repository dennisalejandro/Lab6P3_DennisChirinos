#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <sstream>
#include "Numero.h"
using namespace std;
class Oct : public Numero {
	private: 
		string Name;
		int Value;
	public: 
		Oct(string);
		void  setName(string);
		void  setValue(string);
		string getName();
		int getValue();
		int octalToDecimal(int);
};
