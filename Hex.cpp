#include "Hex.h"
#include <iostream>
#include <sstream>
#include <string>
#include "Numero.h"
#include <iomanip>
using namespace std;
	Hex::Hex(string Name):Numero(Name) { 
		setName(Name);
		setValue(Name);
	}
	void Hex::setName(string a) {
		this->Name = a;
	}
	void Hex::setValue(string a) {
		int num = std::stoi(a,0,16);
		//cout << num << ":hex:";
		ostringstream temp;
		temp << num;
		Numero::setValue(temp.str());
		this->Value = num;
	}
	string Hex::getName() {
		return this->Name;
	}
	int Hex::getValue() {
		return this->Value;
	}
