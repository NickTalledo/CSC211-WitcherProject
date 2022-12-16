#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "Witchers.h"

Witcher::Witcher() {

	name = "Bob";
	school = "Donkey";
	swordsmanship = 1;
	alchemy = 1;
	signs = 1;
	strength = 1;
	speed = 1;
}

Witcher::Witcher(string n, string sch, int sw, int alc, int sig, int str, int sp) {
	name = n;
	school = sch;
	swordsmanship = sw;
	alchemy = alc;
	signs = sig;
	strength = str;
	speed = sp;
}


void Witcher::getData(Witcher w[], int& len) {
	ifstream fRead;
	string newline;
	fRead.open("witcherIn.txt");
	if (!fRead) {
		cout << "\n Error: Unable to open the file for reading.";
		exit(0);
	}
	while (!fRead.eof()) {
		fRead >> w[len].name;
		fRead >> w[len].school;
		fRead >> w[len].swordsmanship;
		fRead >> w[len].alchemy;
		fRead >> w[len].signs;
		fRead >> w[len].strength;
		fRead >> w[len].speed;
		len++;
	}
}

void Witcher::addWitcher(Witcher w[], int& len) {
	string name;
	string school;
	int swordsmanship;
	int alchemy;
	int signs;
	int strength;
	int speed;

	cout << "Enter name: ";
	cin >> name;
	cout << "Enter school: ";
	cin >> school;
	cout << "Enter swordsmanship: ";
	cin >> swordsmanship;
	cout << "Enter alchemy: ";
	cin >> alchemy;
	cout << "Enter signs: ";
	cin >> signs;
	cout << "Enter strength: ";
	cin >> strength;
	cout << "Enter speed: ";
	cin >> speed;
	Witcher temp(name, school, swordsmanship, alchemy, signs, strength, speed);
	w[len] = temp;
	len++;
}

void Witcher::getWitcherData(Witcher w[], int len) {
	int f = -1;
	string name;
	cout << "\n Enter Witcher's name to search: ";
	cin >> name;
	for (int i = 0; i < len; i++) {
		if (w[i].name.compare(name) == 0) {
			f = i;
			break;
		}
	}
	if (f == -1) {
		cout << "\n Witcher data not found.";
	}
	else {
		cout << "\n Name: " << w[f].name << "\n School: " << w[f].school << "\n Swordsmanship: "
			<< w[f].swordsmanship << "\n Alchemy: " << w[f].alchemy << "\n Signs: " << w[f].signs
			<< "\n Strength: " << w[f].strength << "\n Speed: " << w[f].speed;
	}
}

void Witcher::writeFile(Witcher w[], int len) {
	ofstream fWrite;
	fWrite.open("witcherOut.txt");
	if (!fWrite) {
		cout << "\n Error: Unable to open the file for writing.";
		exit(0);
	}
	for (int i = 0; i < len; i++) {
		fWrite << w[len].school << endl;
		fWrite << w[len].swordsmanship << endl;
		fWrite << w[len].alchemy << endl;
		fWrite << w[len].signs << endl;
		fWrite << w[len].strength << endl;
		fWrite << w[len].speed << endl;
	}
}

void Witcher::showAll(Witcher w[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "\n Name: " << w[i].name << "\n School: " << w[i].school << "\n Swordsmanship: "
			<< w[i].swordsmanship << "\n Alchemy: " << w[i].alchemy << "\n Signs: " << w[i].signs
			<< "\n Strength: " << w[i].strength << "\n Speed: " << w[i].speed;
	}
}
