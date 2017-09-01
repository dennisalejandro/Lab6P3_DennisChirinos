#include "Numero.h"
#include <iostream>
#include <string>
using namespace std;
	Numero::Numero(string Name, int Value) { 
		setName(Name);
		setValue(Value);
	}
	void Numero::setName(string a) {
		this->Name = a;
	}
	void Numero::setValue(int a) {
		this->Value = a;
	}
	string Numero::getName() {
		return this->Name;
	}
	int Numero::getValue() {
		return this->Value;
	}
