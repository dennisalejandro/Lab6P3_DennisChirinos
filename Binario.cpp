#include "Binario.h"
#include "Numero.h"
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
	Binario::Binario(string Name):Numero(Name) { 
		setName(Name);
		char a;
		a = Name.at(Name.length()-1);
		if (isalpha(a)) {
			Name.erase(Name.length()-1);
		}
		setValue(Name);
	}
	void Binario::setName(string a) {
		this->Name = a;
	}
	void Binario::setValue(string a) {
		int bin, dec = 0, rem, num, base = 1;
		num = stoi(a);
		while(num>0) {
			rem = num % 10;
		        dec = dec + rem * base;
        		base = base * 2;
        		num = num / 10;
		}
		cout << "dec: " << dec << "\n";
		this->Value = dec;
		ostringstream temp;
		temp << dec;
		Numero::setValue(temp.str());
	}
	string Binario::getName() {
		return this->Name;
	}
	int Binario::getValue() {
		return this->Value;
	}
