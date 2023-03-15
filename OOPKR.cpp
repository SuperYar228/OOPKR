#include <cmath>
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <fstream>
#include"institution.h"
#include"DrivingSchool.h"


using namespace std;

bool lang = true;
const char nfile_u[12] = "Cap_Ukr.txt";
const char nfile_u[12] = "Cap_Eng.txt";
ifstream strt;
const int CCAPT = 28;
const int LCAPT = 60;
char mas_cap[CCAPT][LCAPT];

const char menu_u[14] = "menu_Ukr.txt";
const char menu_e[14] = "menu_Eng.txt";
ifstream menu;
const int MENU_CCAPT = 28; 
const int MENU_LCAPT = 60; 
char mas_menu[MENU_CCAPT][MENU_LCAPT];

institution* I_np;
institution* I_p;
int N_institution = 0;

void opys_pz()
{
	cout << mas_cap[3] << endl << endl;
	cout << mas_cap[4] << endl << endl;
	cout << mas_cap[9] << endl << endl;
	cin.get(); cin.get();
	return;
};
void demo_base()
{
	char base_demo;
	while (true)
	{
		system("cls");
		cout << mas_menu[6] << endl;

		cout << "1. " << mas_menu[7] << endl;
		cout << "2. " << mas_menu[8] << endl;
		cout << "3. " << mas_menu[9] << endl;
		cin >> base_demo;
		
		switch (base_demo)
		{
		case '1': if (I_np !=NULL)
		{
			I_np->Print_institution(); // Метод добавить в описание 
		}
				else
		{
			cout << mas_menu[10] << endl;
		};
				cout << mas_cap[9] << endl << endl:
		cin.get(); cin.get();
		break;

		}
	}
}