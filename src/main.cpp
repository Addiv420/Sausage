#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	system("clear");

	float kontostand;
	unsigned int gramm;
	float wurstPreis = 0.05;
	float preis;
	float neuerKontostand;
	bool bezahlen = false;

	cout << "Dein  Kontostand (€): ";
	cin >> kontostand;
	cout << "Wieviel Wurst darf es sein (gramm): ";
	cin >> gramm;

	system("clear");
	
	preis = gramm * wurstPreis;
	neuerKontostand = kontostand - preis;

	cout << "Das sind dann einmal " << preis << "€" << endl << endl;

	cout << "Bezahlen?	[1]" << endl << "Nicht bezahlen	[0]" << endl
		<< "Eingabe: ";
	cin >> bezahlen;

	system("clear");

	if (bezahlen == true) {
		cout << "Dein neuer Kontostand lautet: " << neuerKontostand << "€" << endl;
		if (neuerKontostand <= 0) {
			cout << "Toll gemacht! Du hast nun Schulden beim Metzger :)" << endl;
		}
	}

	else if (bezahlen == false){
		cout << "Transaktion fehlgeschlagen" << endl;
	}

	return 0;
}
