#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

float rect_area(float a, float b)
{
	float s = a * b;
	return s;
}

float triangle_area(float a, float h)
{
	float s = (a * h) / 2.0;
	return s;
}

float circle_area(float r)
{
	float s = M_PI * pow(r, 2);
	return s;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Площадь прямоугольника\n" << endl;
	float a, b;
	cout << "Введите сторону a: ";
	cin >> a;
	cout << "Введите сторону b: ";
	cin >> b;
	cout << "\nПлощадь прямоугольника равна: " << rect_area(a, b) << endl;
	cout << "\n\nПлощадь треугольника\n" << endl;
	cout << "Введите длину основания: ";
	cin >> a;
	cout << "Введите длину высоты: ";
	cin >> b;
	cout << "\nПлощадь треугольника равна: " << triangle_area(a, b) << endl;
	cout << "\n\nПлощадь круга\n" << endl;
	cout << "Введите радиус: ";
	cin >> a;
	cout << "\nПлощадь круга равна: " << circle_area(a) << endl;
	system("pause");
	return 0;
}
