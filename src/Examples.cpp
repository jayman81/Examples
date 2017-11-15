//============================================================================
// Name        : Examples.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <ctype.h> // char funktionen
#include <string>
#include <iomanip> // Ausgabeformatierungen
#include "types.h"	// uint8_t uws.


int main() {
	std::cout << "!!!Hello World!!!" << std::endl; // prints !!!Hello World!!!
	int retVal = 0;
	char name;

	char z = 'c';

	retVal = isalnum(z); // i ungleich 0 falls c Buchstabe oder Ziffer, sonst i gleich 0.
	retVal = isalpha(z); // i ungleich 0 falls c Buchstabe, sonst i gleich 0
	retVal = isdigit(z); // i ungleich 0 falls c Ziffer (0 ... 9), sonst i gleich 0
	retVal = isprint(z); // i ungleich 0 falls c druckbares Zeichen incl. Leerzeichen, sonst i gleich 0.
	retVal = isspace(z); // i ungleich 0 falls c Standardtrennzeichen (Leerzeichen, Tabulator
							// oder Zeilenvorschub), sonst i gleich 0
	retVal = tolower(z); // i liefert kleingeschriebenes bquivalent von c, falls c Buchstabe,
							// sonst bleibt c unverändert.
	retVal = toupper(z); // i liefert großgeschriebenes bquivalent von c, falls c Buchstabe,
							// sonst bleibt c unverändert.

	std::cout << "Enter Name: ";
	//std::cin >> name;
	//std::cout << toupper(name) << std::endl;

	std::clog << "CLOG" << std::endl;
	std::cerr << "CERR" << std::endl;

	/*
	 * Bildschirmausgabe formatieren
	 *
	 * dec Ganzzahl in dezimaler Form ausgeben (Standard)
	 * oct Ganzzahl in oktaler Form ausgeben
     * hex Ganzzahl in hexadezimaler Form ausgeben
	 * setw() Feldbreite festlegen (für alle Datentypen)
	 * setfill() Füllzeichen festlegen (Standard ist blank)
	 * setprecision() Anzahl der signifikanten Stellen bei float-Werten:
	 *	bei ios::fixed (s. Tab. unten): Stellen nach dem Komma
	 * setiosflags() Setzen von Formatierungsflags (s. Tab. unten)
	 * resetiosflags() Löschen von Formatierungsflags (s. Tab. unten)
	 *
	 * ios::left Linksbündige Ausgabe (im Feld)
	 * ios::right Rechtsbündige Ausgabe (im Feld, Standard)
	 * ios::dec Dezimale Ganzzahlausgabe (Standard)
	 * ios::oct Oktale Ganzzahlausgabe
	 * ios::hex Hexadezimale Ganzzahlausgabe
	 * ios::showbase Basis-Indikator bei Ausgabe anzeigen
	 * ios::showpoint float-Wert-Ausgabe mit Dezimalpunkt erzwingen
	 * ios::uppercase Hexadezimale Buchstabenziffern groß schreiben
	 * ios::showpos Positives Vorzeichen bei Ganzzahlen zeigen
	 * ios::scientific float-Wert-Ausgabe in Gleitpunktdarstellung
	 * ios::fixed float-Wert-Ausgabe in Festpunktdarstellung
	 * ios::unitbuf Alle Stream-Puffer leeren
	 * ios::stdio cout- und cerr-Puffer leeren
	 * ios::boolalpha Boolsche Ausgaben mit true und false statt 1 und 0
	 *
	 *
	 */

	int betrag = 12;
	std::cout << "Rechnungsbetrag" << std::setw(12) << std::setfill('.')
	<< betrag << ",-- EURO" << std::endl;

	for (int u = 0; u <= 15; u++) {
		std::cout << u << std::hex << std::setiosflags(std::ios::uppercase)
		<< std::setiosflags(std::ios::showbase) << " ";
	}

	/*
	 * Formatbeschreiber
	 *
	 * %c ein einzelnes Zeichen
 	 * %d eine int-Zahl
	 * %i eine int-Zahl
	 * %x eine Hexadezimalzahl
	 * %o eine Oktalzahl
	 * %u eine vorzeichenlose Dezimalzahl
	 * %f eine float-Zahl in Festkommadarstellung
	 * %e eine float-Zahl in Gleitkommadarstellung
	 * %g eine float-Zahl in %f- oder %e-Darstellung
	 * %s eine Zeichenkette (String)
	 * %p einen Pointer
	 * %% ein Prozentzeichen
	 *
	 *
	 *
	 */

	//next Chapter 7 / Seite 127

	return 0;
}
