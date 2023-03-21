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
			I_np->Print_institution(); // Метод добавить в описание 
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
				N_Point++; // збільшуємо кількість створених об'єктів
				cout << mas_cap[9] << endl; // Повернутися до меню демонстрації
				cin.get(); cin.get();
			}
			else
			{
				cout << mas_menu[5] << endl;// Цей об'єкт базового класу вже існує
				cout << mas_cap[9] << endl; // Повернутися до меню демонстрації
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
// функція основного меню демонстраці
//
void demo()
{
	char pm_demo; // пункт меню
	while (true)
	{
		system("cls");
		cout << mas_cap[17] << endl; // Режим демонстрації роботи обєктів
		cout << "1. " << mas_cap[20] << endl; // Створення об'єктів базового класу
		cout << "2. " << mas_cap[21] << endl; // Демонстрація стану об'єктів базових класів
		cout << "3. " << mas_cap[22] << endl; // Створення об'єктів похідних класів
		cout << "4. " << mas_cap[23] << endl; // Демонстрація стану об'єктів похідних класів
		cout << "5. " << mas_cap[24] << endl; // Перезавантаження операторів базових класів
		cout << "6. " << mas_cap[25] << endl; // Перезавантаження операторів похідних класів
		cout << "7. " << mas_cap[26] << endl; // Повернутися до головного меню
		cin >> pm_demo; // вводимо пункт меню
		//
		// обробка пункту меню
		//
		switch (pm_demo)
		{
		case '1': cout << "1. " << mas_cap[20] << endl;

			create_base(); // Створення об'єктів базового класу
			break;

		case '2': cout << "2. " << mas_cap[21] << endl;

			demo_base(); // Демонстрація стану об'єктів базових класів
			break;
		case '3': cout << "3. " << mas_cap[22] << endl;

			// Створення об'єктів похідних класів

			break;
		case '4': cout << "4. " << mas_cap[23] << endl;
			// Демонстрація стану об'єктів похідних класів
			break;
		case '5': cout << "5. " << mas_cap[24] << endl;
			// Перезавантаження операторів базових класів
			break;
		case '6': cout << "6. " << mas_cap[25] << endl;
			// Перезавантаження операторів похідних класів

			break;
		case '7': cout << "7. " << mas_cap[26] << endl;
			// Повернутися до головного меню
			return;
		default: cout << mas_cap[27] << endl; // Обрано неіснуючий пункт меню
			break;
		}
	}
	return;
};
//
// Функція вибору мови інтерфейсу
//
bool lang_ua_en()
{
	char li; // пункт обрана мова
	if (lang)
	{ // поточна мова інтерфейсу - українська
		cout << "Оберіть мову інтерфейсу" << endl;
		cout << "1. Укранська" << endl;
		cout << "2. Англійська" << endl;
		cout << "Обрана мова_";
	}
	else
	{ // поточна мова інтерфейсу - англійська
		cout << "Select the interface language" << endl;
		cout << "1. Ukrainian" << endl;
		cout << "2. English" << endl;
		cout << "Selected language_";
	}
	cin >> li; // вводимо обраний пункт меню
	if (li == '1')
	{ // Обрано українську мову
		cout << "Ви обрали українську мову" << endl;
		return true;
	}
	else
	{ // Обрано англійську мову
		cout << "You have chosen English" << endl;
		return false;
	}
};

//
// функція виведення заставки обраною мовою інтерфейсу
//
void zastavka()
{
	system("cls"); // очищуємо екран
	cout << endl;
	cout.width(45); cout.setf(ios::right);
	cout << mas_cap[0] << endl; // друкуємо рядок "Український державний університет науки і технологій"
	cout.width(42); cout.setf(ios::right);
	cout << mas_cap[1] << endl; // друкуємо рядок "Факультет прикладних компютерних технологій"
	cout.width(45); cout.setf(ios::right);
	cout << mas_cap[2] << endl << endl; // друкуємо рядок "Кафедра економічної інформатики"
	cout << mas_cap[3] << endl << endl; // друкуємо рядок "Об'єктно-орієнтована система"
	cout << mas_cap[4] << endl << endl; // друкуємо рядок «Точка на площині та колоьрова точка»
	cout << mas_cap[5] << endl << endl; // друкуємо рядок "Алексейчук Єлизавета Дмитрівна"
	cout << mas_cap[6] << endl << endl; // друкуємо рядок "група ЕК01-18-01"
	cout << mas_cap[7] << endl << endl; // друкуємо рядок "Керівник: Лозовська Людмила Іванівна"
	cout << mas_cap[8] << endl << endl; // друкуємо рядок " Дніпро, 2022"
	cout << endl << endl << endl << endl; // пропускаємо кілька рядків
}
//
// функція настройки меню на обрану мову
//
void LoadCaption()
{ // перевіряємо обрану мову
	if (lang)
		start.open(nfile_u); // обрали українську мову, відкриваємо відповідний файл
	else
		start.open(nfile_e); // обрали анлійську мову, відкриваємо відповідний файл
	//
	// перевіряємо правильність відкриття файлу заставки
	//
	if (start.fail())
	{
		if (lang)
			cerr << "Файл " << nfile_u << " не відкрито." << endl;

		else
			cerr << "Файл " << nfile_e << " не відкрито." << endl;
		system("pause");
		exit(-1); // завершуємо роботу програми
	}
	//
	// заповнюємо масив рядками заставки
	//
	int i;
	for (i = 0; i < CCAPT; i++)
		start.getline(mas_cap[i], LCAPT);
	start.close();
	if (lang) // обрали українську мову
		menu.open(menu_u); // відриваємо файл меню українською мовою
	else // обрали англійську мову
		menu.open(menu_e); // відриваємо файл меню англійською мовою
	if (menu.fail()) // перевіряємо відкриття файлу і виводимо повідомлення, якщо файл не відкрито мовою
		інтерфейсу
	{
	if (lang)
	cerr << "Файл " << menu_u << " не открыт." << endl;
	else
	cerr << "Файл " << menu_e << " не открыт." << endl;
	system("pause");
	exit(-1);
	}
		//
		// Заповнюємо массив рядками меню
		//
	for (i = 0; i < MENU_CCAPT; i++)
		menu.getline(mas_menu[i], MENU_LCAPT);
	menu.close(); // закриваємо файл
}
//
// Функція допомоги
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
	// Включить кириллицу
	//
	setlocale(LC_ALL, "Russian");
	/////////////////////////////////////////////////////////
	// ПОПЕРЕДНЄ ТЕСТУВАННЯ КЛАСІВ
	//
	Point t1(1, 1); // створення об'єкту базового класу
	t1.Print_Point(); // Друк інформації про створений об'єкт
	Point t2(2, 2); // створення об'єкту базового класу
	t2.Print_Point(); // Друк інформації про створений об'єкт
	//
	// перевірка перевантажених бінарних операцій
	//
	cout << "перевірка > :";
	if (t1 > t2) cout << " t1>t2" << endl;
	else
	{
		cout << "t2>t1" << endl;
	}
	cout << "перевірка < :";
	if (t1 < t2) cout << "t1<t2" << endl;
	else
	{
		cout << "t2<t1" << endl;
	}
	cout << "перевірка == :";
	if (t1 == t2) cout << "t1=t2" << endl;
	else
	{

		cout << "t2!=t1" << endl;
	}
	cout << "перевірка != :";
	if (t1 != t2) cout << "t1!=t2" << endl;
	else
	{
		cout << "t2==t1" << endl;
	}
	ColorPoint ct1(1, 2, 3); // створення об'єкту похідного класу
	ColorPoint ct2(10, 20, 15);// створення об'єкту похідного класу
	ct1.Print_ColorPoint(); // Друк інформації про створений об'єкт
	ct1++; // застосування постфіксної операції інкремент
	ct1.Print_ColorPoint(); // Друк інформації про об'єкт після застосування постфіксної операції
	інкремент
	(++ct1)->Print_ColorPoint();// застосування префіксної операції інкремент та Друк інформації про
	об'єкт
		ct2.Print_ColorPoint(); // Друк інформації про створений об'єкт
	(ct2++)->Print_ColorPoint(); // застосування постфіксної операції інкремент та Друк інформації про
	об'єкт
		++ct2; // застосування префіксної операції інкремент
	ct2.Print_ColorPoint(); // Друк інформації про об'єкт після застосування префіксної операції
	декремент
		ct1.Print_ColorPoint(); // Друк інформації про об'єкт
	(--ct1)->Print_ColorPoint(); // застосування префіксної операції декремент та Друк інформації про
	об'єкт
		(ct2--)->Print_ColorPoint(); // застосування постфіксної операції декремент та Друк інформації про
	об'єкт
		--ct2; // застосування префіксної операції декремент
	ct2.Print_ColorPoint(); // Друк інформації про об'єкт після застосування префіксної операції
	декремент
		system("pause");
	//////////////////////////////////////////////////////
	//
	// Объявляем переменные
	//
	char pm; // обраний пункт головного меню
	//
	// відкриваємо файл з заставкою українською мовою
	//

	start.open(nfile_u);
	//
	// перевіряємо, чи відкрився файл з заставкою українською мовою
	//
	if (!start.is_open()) // якщо файл не відкрито, завершуємо програму
	{
		cout << "Файл " << nfile_u << " відкрити невожливо!\n" << endl;
		cout << "Перевірте його існування та запустіть програму ще раз.\n" << endl;
		return 0;
	}
	//
	// файл з заставкою українською мовою успішно відкрито
	//
	// вводимо інформацію для екрана заставки українською мовою
	//
	int i;
	for (i = 0; i < 9; i++) // читаємо 9 рядків заставки
		start.getline(mas_cap[i], LCAPT);
	start.close(); // закриваємо файл з заставкою українською мовою
	zastavka(); // виводимо заставку програми на екран
	lang = lang_ua_en(); // запам'ятовуємо обрану мову інтерфейсу
	LoadCaption(); // формуємо масив для виведення на екран рядків меню обраною мовою інтерфейсу
	zastavka(); // виводимо заставку обраною мовою інтерфейсу
	cout << mas_cap[9]; // пропонуємо продовжити роботу програми
	cin.get(); cin.get();
	//
	// основне меню програми
	//
	while (true)
	{
		system("cls");
		cout << mas_cap[15] << endl; // Оберіть пункт меню:
		cout << "1. " << mas_cap[16] << endl; // Опис ПрЗ
		cout << "2. " << mas_cap[17] << endl; // Режим демонстрації роботи об'єктів
		cout << "3. " << mas_cap[18] << endl; // Допомога/довідка
		cout << "4. " << mas_cap[19] << endl; // Вихід з системи
		cin >> pm; // вводимо обраний пункт меню
		//
		// обробка пунктів основного меню

		//
		switch (pm)
		{
		case '1': cout << "1. " << mas_cap[16] << endl;

			opys_pz(); // викликаємо функцію, яка виводить на екран "Опис ПрЗ"

			(нашої програми)

				break;

		case '2': cout << "2. " << mas_cap[17] << endl;

			demo(); // викликаємо функцію, що демонструє роботу з об'єктів
			break;

		case '3': cout << "3. " << mas_cap[18] << endl;

			help(); // викликаємо функцію, що підказує як працює наша

			програма

				break;

		case '4': cout << "4. " << mas_cap[19] << endl;

			exit(1); // завершуємо роботу програми
			break;

		default: cout << mas_cap[27] << endl; // попереджуємо, що обрали неіснуючий пункт меню

			break;

		}
	}
	return 0;
}