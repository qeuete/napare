
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int a;
	int b;

	cout << "Число а=";
	cin >> a;
	cout << "Число b=";
	cin >> b;

	int* p_a = &a;
	int* p_b = &b;

	*p_a *= 2;
	*p_b /= 2;

	cout << "p_a * 2 =" << *p_a << endl;
	cout << "адрес p_a * 2 =" << p_a << endl;
	cout << "p_b / 2 =" << *p_b << endl;
	cout << "адрес p_b / 2 =" << p_b << endl;

	system("pause");
	return 0;
}