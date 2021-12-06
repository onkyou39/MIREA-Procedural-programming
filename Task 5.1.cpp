#include <iostream>

using namespace std;

int euclid(int a, int b, bool type)
{
	if (!type) //решение делением
	{
		while (a != 0 && b != 0)
		{
			if (a > b)
			{
				a = a % b;
			}
			else
			{
				b = b % a;
			}
		}
		return a + b; //т. к. в одной из переменных ноль
	}
	else //решение вычитанием
	{
		while (a != b)
		{
			if (a > b)
			{
				a = a - b;
			}
			else
			{
				b = b - a;
			}
		}
		return a;
	}
}

int main()
{
	setlocale(LC_ALL, "russian");
	int a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "НОД делением: " << euclid(a, b, 0) << endl;
	cout << "НОД вычитанием: " << euclid(a, b, 1) << endl;
	system("pause");
	return 0;
}
