#include "Numero.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
	Numero::Numero(string Name) { 
		setName(Name);
		char a;
		a = Name.at(Name.length()-1);
		if (isalpha(a)) {
			Name.erase(Name.length()-1);
		}
		setValue(Name);
	}
	void Numero::setName(string a) {
		this->Name = a;
	}
	void Numero::setValue(string b) {
		int a; 
		a = stoi(b);
		this->Value = a;
	}
	string Numero::getName() {
		return this->Name;
	}
	int Numero::getValue() {
		//cout << "soy el padre" << endl;
		return this->Value;
	}
	ostream& operator << (ostream& out, Numero in) {
		out << in.getName();
		return out;
	}
	
	int Numero::operator + (Numero in) {
		return in.getValue() + this->Value;
	}
	int Numero::operator - (Numero in) {
			return (-in.getValue() + this->Value);
		}
	int Numero::operator * (Numero in) {
			return (in.getValue() * this->Value);
		}
	
