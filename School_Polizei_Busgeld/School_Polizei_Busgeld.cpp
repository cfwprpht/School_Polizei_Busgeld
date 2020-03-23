//
// This Code belongs to Harald Swoboda a Student of HTL WienWest Class 1BBIF
// This work was done for AINF Prof Jaich.
//

#include <iostream>
using namespace std;

int main() {
	int erlaubteGeschwindigkeit, gefahreneGeschwindigkeit, geschwindigkeitsueberschreitung;
	erlaubteGeschwindigkeit = gefahreneGeschwindigkeit = geschwindigkeitsueberschreitung = 0;
	string empty = "";

	cout << "\n\n Bitte geben sie die erlaubte Geschwindigkeit ein:\n ";
	cin >> erlaubteGeschwindigkeit;
	system("cls");
	cout << "\n\n Bitte geben Sie die gefahrene Geschwindigkeit ein:\n ";
	cin >> gefahreneGeschwindigkeit;
	system("cls");

	geschwindigkeitsueberschreitung = gefahreneGeschwindigkeit - erlaubteGeschwindigkeit;

	if (geschwindigkeitsueberschreitung >= 100) cout << "\n\n !!Totaler Fuehrerscheinentzug!!\n\n";
	else if (geschwindigkeitsueberschreitung > 60) cout << "\n\n !!6 Monate Fuehrerscheinentzug!!\n\n";
	else if (geschwindigkeitsueberschreitung > 50) cout << "\n\n !!3000.- Euro Strafe!!\n\n";
	else if (geschwindigkeitsueberschreitung > 30) cout << "\n\n !!800.- Euro Strafe!!\n\n";
	else if (geschwindigkeitsueberschreitung > 10) cout << "\n\n !!200.- Euro Strafe!!\n\n";
	else if (geschwindigkeitsueberschreitung > 5) cout << "\n\nGeschwindigkeit ist innerhalb der Toleranz.\n\n";
	else cout << "\n\n Keine Geschwindigkeits Ueberschreitung.\n\n";
	cout << " Druecken Sie einen Buchstaben oder eine Zahl und dann Enter...\n ";
	cin >> empty;
	return 0;
}
