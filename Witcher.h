#pragma once
#ifndef Witchers_H
#define Witchers_H

#include <string>
using namespace std;

class Witcher {
public:
	Witcher();
	Witcher(string n, string sch, int sw, int alc, int sig, int str, int sp);
	void getData(Witcher[], int&);
	void loadMenu(int);
	void getWitcherData(Witcher[], int);
	void writeFile(Witcher[], int);
	void addWitcher(Witcher[], int&);
	void showAll(Witcher[], int);
	//void update(Witcher[], int);
	//void setWitcherData(Witcher[], int);


private:
	string name;
	string school;
	int swordsmanship;
	int alchemy;
	int signs;
	int strength;
	int speed;
};

#endif
