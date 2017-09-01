#pragma once
#include <iostream>
#include <string>
#include "Numero.h"
using namespace std;
class Hex : public Numero{
	private: 
		string Name;
		int Value;
	public: 
		Hex(string);
		void  setName(string);
		void  setValue(string);
		string getName();
		int getValue();
};
