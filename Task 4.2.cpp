#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int sign(double x)
{
	if (x > 0)
	{
		return 1;
	}
	if (x == 0)
	{
		return 0;
	}
	return -1;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double x;

	cout << "Введите число для определения знака:" << endl;
	cin >> x;
	switch (sign(x))
	{
	case 1:
		cout << "Число " << x << " положительное" << endl;
		break;
	case 0:
		cout << "Число " << x << " равно нулю" << endl;
		break;
	case -1:
		cout << "Число " << x << " отрицательное" << endl;
		break;
	default:
		break;
	}
	return 0;
}
