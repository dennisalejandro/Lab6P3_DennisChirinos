#include "Binario.h"
#include <iostream>
#include <string>
using namespace std;
	Binario::Binario(string Name) { 
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
		int b;
		int res = 0;
		for(int i = 0; num > 0; ++i) {
			if((num % 10) == 1) {
				res += (1 << i);
			}
			num /= 10;
		}
		b = res;
		this->Value = b;
	}
	string Binario::getName() {
		return this->Name;
	}
	int Binario::getValue() {
		return this->Value;
	}
