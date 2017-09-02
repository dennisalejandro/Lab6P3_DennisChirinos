#include "Oct.h"
#include <iostream>
#include <string>
using namespace std;
	Oct::Oct(string Name, string Value) { 
		setName(Name);
		setValue(Value);
	}
	void Oct::setName(string a) {
		this->Name = a;
	}
	void Oct::setValue(string a) {
		this->Value = a;
	}
	string Oct::getName() {
		return this->Name;
	}
	string Oct::getValue() {
		return this->Value;
	}
