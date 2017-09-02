#include "Oct.h"
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <sstream>
#include "Numero.h"
using namespace std;
	Oct::Oct(string Name):Numero(Name) { 
		setName(Name);
		setValue(Name);
	}
	void Oct::setName(string a) {
		this->Name = a;
	}
	void Oct::setValue(string a) {
		int num;
		int val;
		a.erase(a.begin());
		a.erase(a.begin());
		cout << a << ":a:\n";
		val = stoi(a);
		num = octalToDecimal(val);
		ostringstream temp;
		temp << num;
		Numero::setValue(temp.str());
		this->Value = num;
	}
	string Oct::getName() {
		return this->Name;
	}
	int Oct::getValue() {
		return this->Value;
	}
	int Oct::octalToDecimal(int octalNumber) {
    	int decimalNumber = 0, i = 0, rem;
	    	while (octalNumber != 0){
			rem = octalNumber % 10;
			octalNumber /= 10;
			decimalNumber += rem * pow(8, i);
			++i;
	    	}
    	return decimalNumber;
	}
