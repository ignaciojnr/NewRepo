// probando.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <regex>
#include <string>
#include <conio.h>
#include <iostream>

using namespace std;


int main()
{
	string a, b, c, d, r;
	a = "A";
	b = "a";
	c = "2";
	d = "EDFRAPIDOTTG";
	r = "[A-Z]+";
	regex patron(r);

	if (regex_match(a, patron)) {
		cout << "a cumple" << endl;
	}
	else {
		cout << "a no cumple" << endl;
	}
	if (regex_match(b, patron)) {
		cout << "b cumple" << endl;
	}
	else {
		cout << "b no cumple" << endl;
	}
	if (regex_match(c, patron)) {
		cout << "c cumple" << endl;
	}
	else {
		cout << "c no cumple" << endl;
	}
	r = "[A-Z]*RAPIDO[A-Z]*";
	regex patron2(r);
	if (regex_match(d, patron2)) {
		cout << "d contiene a RAPIDO" << endl;
	}
	else {
		cout << "d no contiene a RAPIDO" << endl;
	}
	system("pause");
	return 0;
}


