#include "Hex.h"
#include <iostream>
#include <string>
using namespace std;
	Hex::Hex(string Name, string Value) { 
		setName(Name);
		setValue(Value);
	}
	void Hex::setName(string a) {
		this->Name = a;
	}
	void Hex::setValue(string a) {
		this->Value = a;
	}
	string Hex::getName() {
		return this->Name;
	}
	string Hex::getValue() {
		return this->Value;
	}
