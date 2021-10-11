#include <iostream>
#include <cmath>


using namespace std;

float credit(float S, float p, int n)
{

	float r = p / 100;
	float m = (S * r  *pow((1 + r), n)) / 12 * (pow((1 + r), n) - 1);
	return m;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	float S, p;
	int n;
	cout << "Введите размер займа: ";
	cin >> S;
	cout << "Введите количество лет: ";
	cin >> n;
	cout << "Введите процент: ";
	cin >> p;
	cout << "\nМесячная выплата равна: " << credit (S, p, n) << endl;
    system("pause");
    return 0;
}



//Задача «Фильтр»

#include <iostream>
#include <fstream>
#include <ctype.h>



using namespace std;



int main()
{
	setlocale(LC_ALL, "Russian");
	char buff[255];
	ifstream fin;
	fin.open("resourse.txt");
	fin.getline(buff, 255);
	fin.close();
	cout << buff << endl;

	for (unsigned int i = 0; i < strlen(buff); i++)
	{
		if (isdigit(static_cast<unsigned char>(buff[i])))
		{
			cout << buff[i];
		}
	}

    system("pause");
    return 0;
}
