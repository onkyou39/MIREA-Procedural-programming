#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	fstream file;
	cout << "Открытие файла на запись" << endl;
	file.open("data.txt", ios_base::out | ios_base::trunc);
	if (file.is_open())
	{
		cout << "Запись 10 случайных чисел в файл" << endl;
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
		{
			file << rand();
			file << " ";
		}
		cout << "Числа успешно записаны" << endl;
	}
	else cout << "Ошибка открытия файла" << endl;
	file.close();

	long sum = 0;
	int temp;
	cout << "Открытие файла на чтение" << endl;
	file.open("data.txt", ios_base::in);
	if (file.is_open())
	{
		while (file >> temp)
		{
			sum += temp;
		}
		cout << "Числа успешно считаны" << endl;
	}
	else cout << "Ошибка открытия файла" << endl;
	file.close();
	cout << "Сумма чисел: " << sum << endl;
	system("pause");
	return 0;
}
