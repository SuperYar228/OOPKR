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
		case '1': if (I_np != NULL)
		{
			I_np->Print_institution(); // ����� �������� � �������� 
		}
				else
		{
			cout << mas_menu[10] << endl;
		};
				cout << mas_cap[9] << endl << endl:
				cin.get(); cin.get();
				break;
		case '2': if (P_d != NULL)
		{
			P_d->Print_DrivingSchool();
		}
		case '3': return;
		default: cout << mas_cap[27] << endl;
		}
	}
};

void create_base()
{
	while (N_Point<2)
	{
		char base_creat;
		system("cls");
		cout << mas_menu[0] << endl;
		cout << "1. " << mas_menu[1] << endl; 
		cout << "2. " << mas_menu[2] << endl;
		cin >> base_creat;
		if (base_creat=='1')
		{
			if (P_np == NULL)
			{
				p_np = new Point()
					cout << mas_menu[4] << endl;
				N_Point++;
				cout << mas_cap[9] << endl;
				cin.get(); 
				cin.get();
			}
			else
			{
				cout << mas_menu[5] << endl;
				cout << mas_cap[9]endl;
				cin.get();
				cin.get();
			}
		else
		{
			if (base_creat=='2')
			{
				if (P_p==NULL)
				{
					cout << mas_menu[3];
					double X, Y;
					cin >> X >> Y;
					P_p = new Point(X, Y);
					cout << mas_menu[4] << endl;

				}
				N_Point++; // �������� ������� ��������� ��'����
				cout << mas_cap[9] << endl; // ����������� �� ���� ������������
				cin.get(); cin.get();
			}
			else
			{
				cout << mas_menu[5] << endl;// ��� ��'��� �������� ����� ��� ����
				cout << mas_cap[9] << endl; // ����������� �� ���� ������������
				cin.get(); cin.get();
			}
		}
else
cout << mas_cap[27] << endl;

		}
	}
	return;

};
//
// ������� ��������� ���� �����������
//
void demo()
{
	char pm_demo; // ����� ����
	while (true)
	{
		system("cls");
		cout << mas_cap[17] << endl; // ����� ������������ ������ �����
		cout << "1. " << mas_cap[20] << endl; // ��������� ��'���� �������� �����
		cout << "2. " << mas_cap[21] << endl; // ������������ ����� ��'���� ������� �����
		cout << "3. " << mas_cap[22] << endl; // ��������� ��'���� �������� �����
		cout << "4. " << mas_cap[23] << endl; // ������������ ����� ��'���� �������� �����
		cout << "5. " << mas_cap[24] << endl; // ���������������� ��������� ������� �����
		cout << "6. " << mas_cap[25] << endl; // ���������������� ��������� �������� �����
		cout << "7. " << mas_cap[26] << endl; // ����������� �� ��������� ����
		cin >> pm_demo; // ������� ����� ����
		//
		// ������� ������ ����
		//
		switch (pm_demo)
		{
		case '1': cout << "1. " << mas_cap[20] << endl;

			create_base(); // ��������� ��'���� �������� �����
			break;

		case '2': cout << "2. " << mas_cap[21] << endl;

			demo_base(); // ������������ ����� ��'���� ������� �����
			break;
		case '3': cout << "3. " << mas_cap[22] << endl;

			// ��������� ��'���� �������� �����

			break;
		case '4': cout << "4. " << mas_cap[23] << endl;
			// ������������ ����� ��'���� �������� �����
			break;
		case '5': cout << "5. " << mas_cap[24] << endl;
			// ���������������� ��������� ������� �����
			break;
		case '6': cout << "6. " << mas_cap[25] << endl;
			// ���������������� ��������� �������� �����

			break;
		case '7': cout << "7. " << mas_cap[26] << endl;
			// ����������� �� ��������� ����
			return;
		default: cout << mas_cap[27] << endl; // ������ ��������� ����� ����
			break;
		}
	}
	return;
};
//
// ������� ������ ���� ����������
//
bool lang_ua_en()
{
	char li; // ����� ������ ����
	if (lang)
	{ // ������� ���� ���������� - ���������
		cout << "������ ���� ����������" << endl;
		cout << "1. ���������" << endl;
		cout << "2. ���������" << endl;
		cout << "������ ����_";
	}
	else
	{ // ������� ���� ���������� - ���������
		cout << "Select the interface language" << endl;
		cout << "1. Ukrainian" << endl;
		cout << "2. English" << endl;
		cout << "Selected language_";
	}
	cin >> li; // ������� ������� ����� ����
	if (li == '1')
	{ // ������ ��������� ����
		cout << "�� ������ ��������� ����" << endl;
		return true;
	}
	else
	{ // ������ ��������� ����
		cout << "You have chosen English" << endl;
		return false;
	}
};

//
// ������� ��������� �������� ������� ����� ����������
//
void zastavka()
{
	system("cls"); // ������� �����
	cout << endl;
	cout.width(45); cout.setf(ios::right);
	cout << mas_cap[0] << endl; // ������� ����� "���������� ��������� ���������� ����� � ���������"
	cout.width(42); cout.setf(ios::right);
	cout << mas_cap[1] << endl; // ������� ����� "��������� ���������� ����������� ���������"
	cout.width(45); cout.setf(ios::right);
	cout << mas_cap[2] << endl << endl; // ������� ����� "������� ��������� �����������"
	cout << mas_cap[3] << endl << endl; // ������� ����� "��'�����-��������� �������"
	cout << mas_cap[4] << endl << endl; // ������� ����� ������ �� ������ �� ��������� �����
	cout << mas_cap[5] << endl << endl; // ������� ����� "���������� ��������� ��������"
	cout << mas_cap[6] << endl << endl; // ������� ����� "����� ��01-18-01"
	cout << mas_cap[7] << endl << endl; // ������� ����� "�������: ��������� ������� �������"
	cout << mas_cap[8] << endl << endl; // ������� ����� " �����, 2022"
	cout << endl << endl << endl << endl; // ���������� ����� �����
}
//
// ������� ��������� ���� �� ������ ����
//
void LoadCaption()
{ // ���������� ������ ����
	if (lang)
		start.open(nfile_u); // ������ ��������� ����, ��������� ��������� ����
	else
		start.open(nfile_e); // ������ �������� ����, ��������� ��������� ����
	//
	// ���������� ����������� �������� ����� ��������
	//
	if (start.fail())
	{
		if (lang)
			cerr << "���� " << nfile_u << " �� �������." << endl;

		else
			cerr << "���� " << nfile_e << " �� �������." << endl;
		system("pause");
		exit(-1); // ��������� ������ ��������
	}
	//
	// ���������� ����� ������� ��������
	//
	int i;
	for (i = 0; i < CCAPT; i++)
		start.getline(mas_cap[i], LCAPT);
	start.close();
	if (lang) // ������ ��������� ����
		menu.open(menu_u); // �������� ���� ���� ���������� �����
	else // ������ ��������� ����
		menu.open(menu_e); // �������� ���� ���� ���������� �����
	if (menu.fail()) // ���������� �������� ����� � �������� �����������, ���� ���� �� ������� �����
		����������
	{
	if (lang)
	cerr << "���� " << menu_u << " �� ������." << endl;
	else
	cerr << "���� " << menu_e << " �� ������." << endl;
	system("pause");
	exit(-1);
	}
		//
		// ���������� ������ ������� ����
		//
	for (i = 0; i < MENU_CCAPT; i++)
		menu.getline(mas_menu[i], MENU_LCAPT);
	menu.close(); // ��������� ����
}
//
// ������� ��������
//
void help()

{
	cout << mas_cap[3] << endl << endl;
	cout << mas_cap[4] << endl << endl;
	cout << mas_cap[9] << endl << endl;
	cin.get(); cin.get();
	return;
};

int main()
{
	//
	// �������� ���������
	//
	setlocale(LC_ALL, "Russian");
	/////////////////////////////////////////////////////////
	// �������ͪ ���������� ���Ѳ�
	//
	Point t1(1, 1); // ��������� ��'���� �������� �����
	t1.Print_Point(); // ���� ���������� ��� ��������� ��'���
	Point t2(2, 2); // ��������� ��'���� �������� �����
	t2.Print_Point(); // ���� ���������� ��� ��������� ��'���
	//
	// �������� �������������� ������� ��������
	//
	cout << "�������� > :";
	if (t1 > t2) cout << " t1>t2" << endl;
	else
	{
		cout << "t2>t1" << endl;
	}
	cout << "�������� < :";
	if (t1 < t2) cout << "t1<t2" << endl;
	else
	{
		cout << "t2<t1" << endl;
	}
	cout << "�������� == :";
	if (t1 == t2) cout << "t1=t2" << endl;
	else
	{

		cout << "t2!=t1" << endl;
	}
	cout << "�������� != :";
	if (t1 != t2) cout << "t1!=t2" << endl;
	else
	{
		cout << "t2==t1" << endl;
	}
	ColorPoint ct1(1, 2, 3); // ��������� ��'���� ��������� �����
	ColorPoint ct2(10, 20, 15);// ��������� ��'���� ��������� �����
	ct1.Print_ColorPoint(); // ���� ���������� ��� ��������� ��'���
	ct1++; // ������������ ���������� �������� ���������
	ct1.Print_ColorPoint(); // ���� ���������� ��� ��'��� ���� ������������ ���������� ��������
	���������
	(++ct1)->Print_ColorPoint();// ������������ ��������� �������� ��������� �� ���� ���������� ���
	��'���
		ct2.Print_ColorPoint(); // ���� ���������� ��� ��������� ��'���
	(ct2++)->Print_ColorPoint(); // ������������ ���������� �������� ��������� �� ���� ���������� ���
	��'���
		++ct2; // ������������ ��������� �������� ���������
	ct2.Print_ColorPoint(); // ���� ���������� ��� ��'��� ���� ������������ ��������� ��������
	���������
		ct1.Print_ColorPoint(); // ���� ���������� ��� ��'���
	(--ct1)->Print_ColorPoint(); // ������������ ��������� �������� ��������� �� ���� ���������� ���
	��'���
		(ct2--)->Print_ColorPoint(); // ������������ ���������� �������� ��������� �� ���� ���������� ���
	��'���
		--ct2; // ������������ ��������� �������� ���������
	ct2.Print_ColorPoint(); // ���� ���������� ��� ��'��� ���� ������������ ��������� ��������
	���������
		system("pause");
	//////////////////////////////////////////////////////
	//
	// ��������� ����������
	//
	char pm; // ������� ����� ��������� ����
	//
	// ��������� ���� � ��������� ���������� �����
	//

	start.open(nfile_u);
	//
	// ����������, �� �������� ���� � ��������� ���������� �����
	//
	if (!start.is_open()) // ���� ���� �� �������, ��������� ��������
	{
		cout << "���� " << nfile_u << " ������� ���������!\n" << endl;
		cout << "�������� ���� ��������� �� �������� �������� �� ���.\n" << endl;
		return 0;
	}
	//
	// ���� � ��������� ���������� ����� ������ �������
	//
	// ������� ���������� ��� ������ �������� ���������� �����
	//
	int i;
	for (i = 0; i < 9; i++) // ������ 9 ����� ��������
		start.getline(mas_cap[i], LCAPT);
	start.close(); // ��������� ���� � ��������� ���������� �����
	zastavka(); // �������� �������� �������� �� �����
	lang = lang_ua_en(); // �����'������� ������ ���� ����������
	LoadCaption(); // ������� ����� ��� ��������� �� ����� ����� ���� ������� ����� ����������
	zastavka(); // �������� �������� ������� ����� ����������
	cout << mas_cap[9]; // ��������� ���������� ������ ��������
	cin.get(); cin.get();
	//
	// ������� ���� ��������
	//
	while (true)
	{
		system("cls");
		cout << mas_cap[15] << endl; // ������ ����� ����:
		cout << "1. " << mas_cap[16] << endl; // ���� ���
		cout << "2. " << mas_cap[17] << endl; // ����� ������������ ������ ��'����
		cout << "3. " << mas_cap[18] << endl; // ��������/������
		cout << "4. " << mas_cap[19] << endl; // ����� � �������
		cin >> pm; // ������� ������� ����� ����
		//
		// ������� ������ ��������� ����

		//
		switch (pm)
		{
		case '1': cout << "1. " << mas_cap[16] << endl;

			opys_pz(); // ��������� �������, ��� �������� �� ����� "���� ���"

			(���� ��������)

				break;

		case '2': cout << "2. " << mas_cap[17] << endl;

			demo(); // ��������� �������, �� ��������� ������ � ��'����
			break;

		case '3': cout << "3. " << mas_cap[18] << endl;

			help(); // ��������� �������, �� ������ �� ������ ����

			��������

				break;

		case '4': cout << "4. " << mas_cap[19] << endl;

			exit(1); // ��������� ������ ��������
			break;

		default: cout << mas_cap[27] << endl; // �����������, �� ������ ��������� ����� ����

			break;

		}
	}
	return 0;
}