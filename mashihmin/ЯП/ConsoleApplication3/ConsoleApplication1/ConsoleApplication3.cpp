// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cout << "Введите цифру" << endl;
	cin >> n;
	switch (n)
	{
	case 1: cout << "One" << endl; break;
	case 2: cout << "Two" << endl; break;
	case 3: cout << "Three" << endl; break;
	case 4: cout << "Four" << endl; break;
	case 5: cout << "Five" << endl; break;
	case 6: cout << "Six" << endl; break;
	case 7: cout << "Seven" << endl; break;
	case 8: cout << "Eight" << endl; break;
	case 9: cout << "Nine" << endl; break;
	case 0: cout << "Zero" << endl; break;
	default: cout << "Данный символ не является цифрой" << endl; break;
	}
	system("pause");
    return 0;
}

