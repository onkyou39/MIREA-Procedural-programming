/*#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>




using namespace std;

float volume(float r1, float r2, float h)
{
	float V = static_cast<float>(1) / 3 * M_PI * h * (pow(r1, 2) + r1 * r2 + pow(r2, 2));
	return V;
}

float square_full(float r1, float r2, float l)
{
	float S = M_PI * (pow(r1, 2) + (r1 + r2) * l + pow(r2, 2));
	return S;
}


int main()
{
	float r1, r2, h, l;
	setlocale(LC_ALL, "Russian");
	cout << "Введите радиус нижнего основания: ";
	cin >> r1;
	cout << "Введите радиус верхнего основания: ";
	cin >> r2;
	if (r2 > r1)
	{
		cout << "\nВерхнее основание не может быть больше нижнего" << endl;
		cout << "Завершение работы программы" << endl;
		return 0;
	}
	cout << "Введите высоту конуса: ";
	cin >> h;
	cout << "Введите длину образующей: ";
	cin >> l;
	float temp = volume(r1, r2, h);
	cout << "\nОбъём конуса: " << temp << endl;
	temp = square_full(r1, r2, l);
	cout << "Площадь полной поверхности конуса: " << temp << endl;
	
	return 0;
}*/


/*#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, a, w;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите a: ";
	cin >> a;
	if (abs(x) < 1)
	{
		w = a * log(abs(x));
	}
	else
	{
		if (a - pow(x, 2) < 0)
		{
			cout << "Ошибка. Подкоренное выражение не может быть меньше нуля" << endl;
			cout << "Выход из программы";
			return 0;
		}
		w = sqrt(a - pow(x, 2));
	}
	cout << "\nW = " << w;
	return 0;
}*/

/*#include <iostream>
#include <math.h>


using namespace std;

float f(float x, float y, float b)
{
	float z = log(b - y) * sqrt(b - x);
	return z;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y, b;
	cout << "Введите x: ";
	cin >> x;
	cout << "Введите y: ";
	cin >> y;
	cout << "Введите b: ";
	cin >> b;
	if (b - y < 1)
	{
		cout << "\nОшибка. Выражение под логарифмом должно быть больше 0" << endl;
		cout << "Выход из программы";
		return 0;
	}
	else
	{
		if (b - x < 0)
		{
			cout << "\nОшибка. Подкоренное выражение не может быть меньше нуля" << endl;
			cout << "Выход из программы";
			return 0;
		}
		else
		{
			cout << "z = " << f(x, y, b);
		}
	}
	return 0;
}*/

/*#include <iostream>


using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = n; i < n + 9; i++)
	{
		cout << i << "; ";
	}
	cout << n + 9;
	return 0;
}*/

#include <iostream>
#include <math.h>


using namespace std;

float f(float x)
{
	float f = (pow(x, 2) - 2 * x + 2) / (x - 1);
	return f;
}

int main()
{
	for (float i = -4; i <= 4; i+=0.5)
	{
		cout << f(i) << endl;
	}
	return 0;
}
