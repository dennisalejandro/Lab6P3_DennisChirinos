#include "Numero.h"
#include "Hex.h"
#include "Binario.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int menu();
int Listar(vector<Numero>*);
int Type(string);
string intToHex(int);
int main() {
	vector<Numero>* list = new vector<Numero>();
	string input;
	int op;
	int NumA;
	int NumB;
	int tipo;
	int res;
	string HEX;
	while (op!=6) {
		op = menu();
		switch (op) {
			case 1:
				cout << "Ingrese Numero\n";
				cin >> input;
				tipo = Type(input);
				cout << tipo << "\n";
				switch (tipo) {
					case 1:{
						Binario a (input);
						list->push_back(a);
						break;
					}
					case 2: {
						Hex b (input);
						list->push_back(b);
						break;
					}
					case 3: {
						
						break;
					}
					case 4: {
						Numero d (input);
						list->push_back(d);
						break;
					}
				}
				break;
			case 2:
				Listar(list);
				cin >> NumA;
				cin >> NumB;
				cout << list->at(NumA) + list->at(NumB) << "\n";
				break;
			case 3:
				Listar(list);
				cin >> NumA;
				cin >> NumB;
				res = list->at(NumA) - list->at(NumB);
				cout << "Resultado" << res << "\n";
				HEX = intToHex(res);
				cout << HEX << "\n";
				break;
			case 4:
				Listar(list);
				cin >> NumA;
				cin >> NumB;
				cout << list->at(NumA) * list->at(NumB) << "\n";
				break;
			case 5:
				break;
			case 6:
				break;
		}
	}
	delete list;
	return 0;
}
int menu() {
	int op;
	cout << "1) Agregar a vector \n";
	cout << "2) Sumar Numero\n";
	cout << "3) Restar Numero\n";
	cout << "4) Multiplicar Numero\n";
	cout << "5)\n";
	cout << "6) Quit\n";
	cin >> op;
	return op;
}
int Listar(vector<Numero>* list) {
	for (int i = 0;i<list->size();i++) {
		cout << i << ":" << list->at(i).getName() << " v:" << list->at(i).getValue() << "\n";
	}
	return 0;
}
int Type(string str) {
	int op = 0;
	char ch;
	char x;
	ch = str.at(str.length()-1);
	
	x = str.at(1);
	//cout << x << "\n";
	if (ch == 'b') {
		op = 1;
	}
	if (!isalpha(ch)) {
		op = 4;
	}
	if (x == 'x') {
		op = 2;
	}

	
	return op;
}
string intToHex(int INT) {
	string Hex;
	stringstream sstream;
	sstream << std::hex << INT;
	Hex = sstream.str();
	return Hex;
}
