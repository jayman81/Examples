//============================================================================
// Name        : Examples.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctype.h> // char funktionen
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int retVal = 0;

	char z = 'c';

	retVal = isalnum(z); // i ungleich 0 falls c Buchstabe oder Ziffer, sonst i gleich 0.
	retVal = isalpha(z); // i ungleich 0 falls c Buchstabe, sonst i gleich 0
	retVal = isdigit(z); // i ungleich 0 falls c Ziffer (0 ... 9), sonst i gleich 0
	retVal = isprint(z); // i ungleich 0 falls c druckbares Zeichen incl. Leerzeichen, sonst i gleich 0.
	retVal = isspace(z); // i ungleich 0 falls c Standardtrennzeichen (Leerzeichen, Tabulator
							// oder Zeilenvorschub), sonst i gleich 0
	retVal = tolower(z); // i liefert kleingeschriebenes bquivalent von c, falls c Buchstabe,
							// sonst bleibt c unver�ndert.
	retVal = toupper(z); // i liefert gro�geschriebenes bquivalent von c, falls c Buchstabe,
							// sonst bleibt c unver�ndert.




	return 0;
}
