#include <iostream>
#include "Witchers.h"
#include <fstream>
#include <cstdlib>
using namespace std;

int loadMenu() {
	int choice;
	cout << "        Welcome to the Witcher guild!" << endl;
	cout << "------------------------------------------------" << endl;
	cout << " 1. Print all data and stats of all Witchers" << endl;
	cout << " 2. Show a specific Witchers's data" << endl;
	cout << " 3. Print all data and stats of all Witchers from a specific school" << endl;
	cout << " 4. Update data for a specific Wicther" << endl;
	cout << " 5. Insert a new Witcher" << endl;
	cout << " 6. Store new data into file" << endl;
	cout << " 7. Quit" << endl;
	cout << "Choose your option : ";
	cin >> choice;
	return choice;
}

int main() {

	Witcher w[10];
	int len = 0;
	int read = 0;
	w[0].getData(w, len);
	read = 1;

	do {
		switch (loadMenu()) {
		case 1:
			w[0].showAll(w, len);
			break;
		case 2:
			w[0].getWitcherData(w, len);
			break;
		case 3:
			cout << "Still in progress.";
			break;
		case 4:
			cout << "Still in progress.";
			break;
		case 5:
			w[0].addWitcher(w, len);
			break;
		case 6:
			w[0].writeFile(w, len);
			break;
		case 7:
			exit(0);
			break;
		default:
			cout << "Invalid choice.";

		}
	} while (1);
	return 0;
}
