#include "container.h"
#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251>nul");
	try
	{
		container A(5);
		container B;
		cout << A << endl;
		cout << "Введите A\n";
		cin >> A;
		cout << "Введите номер";
		int index;
		cin >> index;
		cout << A[index] << endl;
		cout << A + index;
	}
	catch (int)
	{
		cout << "\nОшибка!\n";
	}
	return 0;
}

