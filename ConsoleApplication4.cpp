// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <Windows.h>
#include <cwchar>
#include <string>
#include <MMSystem.h>

#define sndPlaySoundW




using namespace std;
int isPrimeNumber(int);

int main()
{

	cout << "" << endl;
	CONSOLE_FONT_INFO cfi;
	cfi.nFont = 1;
	cfi.dwFontSize.X = 10;
	cfi.dwFontSize.Y = 50;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "  00000000             00         00       0000000             0000000000" <<endl;
	cout << "  00      00           00         00      00      00                    00 " << endl;
	cout << "  00      00           00         00      00       00                  00" << endl;
	cout << "  000000000            00         00      00        00               00" << endl;
	cout << "  00      00           00         00      00        00             00 " << endl;
	cout << "  00       00          00         00	  00       00            00" << endl;
	cout << "  00	    00         00         00      00      00           00" << endl;
	cout << "  00	     00            00000          00000000          00000000000" << endl;
	cout << "" << endl;
	cout << "                               ADVENTURES" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	srand((int)time(0));
	string w;//weapon name
	string name;//character name
	int d;//your weapon index
	int v;//your weapon
	int hp;//your hp
	int x;//dragon dmg
	int y;//dragon hp
	int c;//character index
	int r = 1;//room number
	int action;//you choose your action
	int ehp;//mob hp
	int edmg;//mob dmg
	int fight=0;
	cout << "1-FORK" << endl;
	cout << "2-FRYING PAN" << endl;
	cout << "3-BALLS" << endl;
	cout << "4-RULER" << endl;
	cout << "5-BROADSWORD" << endl;
	cout << "Choose your weapon: ";
	cin >> d;
	if (d == 1)
	{
		v = 10;
		w = "FORK";
		cout << "Your weapon is ";
		cout << w;
		cout << "!" << endl;
	}
	else if (d == 2)
	{
		v = 5;
		w = "FRYING PAN";
		cout << "Your weapon is ";
		cout << w;
		cout << "!" << endl;
	}
	else if (d == 3)
	{
		int p;
		int i = 0;
		while (i++ < 10)
		{
			p = (rand() % 100) + 1;
		}

		v = p;
		w = "BALLS";
		cout << "Your weapon is ";
		cout << w;
		cout << "!" << endl;
	}
	else if (d == 4)
	{
		v = 15;
		w = "RULER";
		cout << "Your weapon is ";
		cout << w;
		cout << "!" << endl;
	}
	else if (d == 5)
	{
		v = 20;
		w = "BROADSWORD";
		cout << "Your weapon is ";
		cout << w;
		cout << "!" << endl;
	}
	else
	{
		v = 1;
		w = "BARE HANDS";
		cout << "Your weapon is ";
		cout << w;
		cout << "!" << endl;
	}
	cout << "dmg is: ";
	cout << v << endl;
	cout << "" << endl;
	cout << "Select your character: " << endl;
	cout << "1 - RAIVO" << endl;
	cout << "2 - BOILER" << endl;
	cout << "3 - MJOLTHOT" << endl;
	cin >> c;
	if (c == 1)
	{
		name = "RAIVO";
		cout << "Your character is " << name << "!" << endl;
		 hp = 50;
	}
	else if (c == 2)
	{
		name = "BOILER";
		cout << "Your character is " << name << "!" << endl;
		 hp = 60;
	}
	else if (c == 3)
	{
		name = "MJOLTHOT(In development!)";
		cout << "Your character is " << name << "!"<<endl;
		 hp = 10;
	}
	while (r < 20)
	{
		int b = 0;
		float f;
		bool luck;
		{
			int random;
			for (int lol = 0; lol < 10; lol++)
			{
				random = rand();
			}
			f = round((float)random * 100.0f / (float)RAND_MAX);
		}
		int l = (int)f % 10;
		if (l == 0 || l == 1)
		{
			luck = true;
		}
		else
		{
			luck = false;
		}


		if (luck==true)
		{
			cout << "bad boy GVIDINGDONG appears! " << endl;
			ehp = 60;
			edmg = 9;
			while (fight!=1)
			{
				cout << "What you're gonna do?" << endl;
				cout << "1 - drink healing potion" << endl;
				cout << "2 - hit the enemy" << endl;
				cout << "3 - cast your ability" << endl;
				cout << "everything else - do nothing" << endl;
				cin >> action;
				if (action == 1)
				{
					cout << name << "'s HP was fully replenished" << endl;
					if (c == 1)
					{
						hp = 50;
					}
					else if (c == 2)
					{
						hp = 60;
					}
					else if (c == 3)
					{
						hp = 10;
					}
				}
				else if (action == 2)
				{
					ehp = ehp - v;
				}
				else if (action == 3)
				{
					ehp = ehp / 2;
				}
				else
				{
				}
				hp = hp - edmg;
				cout << "GVIDINGDONG damaged you for " << edmg << "HP!"<<endl;
				cout << "You damaged GVIDINGDONG for " << v << "HP!" << endl;
				cout << "Your HP = " << hp << endl;
				cout << "GVIDINGDONG's HP = " << ehp << endl;
				if (ehp == 0 || ehp < 0)
				{
					fight = 1;
					cout << "You won!" << endl;
				}
				else if (hp == 0 || hp < 0)
				{
					fight = 1;
					break;
				}
				
			}




		}
		r = r++;

	}
	return 0;
}
