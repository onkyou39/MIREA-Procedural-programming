//задание "Обработка текстовых файлов", вариант 32

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <string>
#include <locale>

using namespace std;


void write(string path, string buff)
{
	fstream file;
	file.open(path, ios_base::out | ios_base::trunc);
	if (!file.is_open())
	{
		cout << "Ошибка открытия файла" << endl;
		return;
	}
	file << buff;
	file.close();
	cout << "Успешная запись в файл" << endl;
}

string read(string path, string buff)
{
	fstream file;
	file.open(path, ios_base::in);
	if (!file.is_open())
	{
		cout << "\nОшибка открытия файла или файл не найден" << endl;
		return "";
	}
	//file >> buff;
	getline(file, buff);
	/*while (!file.eof())
	{
		getline(file, buff);
	}*/
	file.close();
	return buff;
}

string encrypt(string buff, int shift)
{
	for (auto& c : buff)
	{
		if (c >= 'a' && c <= 'z')
			c = ((c - 'a' + shift) % 26) + 'a';
		else
		{
			if (c >= 'A' && c <= 'Z')
			{
				c = ((c - 'A' + shift) % 26) + 'A';
			}
			if (c >= 'А' && c <= 'Я')
			{
				c = ((c - 'А' + shift) % 32) + 'А';
			}
			else if (c >= 'а' && c <= 'я')
			{
			c = ((c - 'а' + shift) % 32) + 'а';
			}
		}
	}
	return buff;
}

string decrypt(string buff, int shift)
{
	for (auto& c : buff)
	{
		if (c >= 'a' && c <= 'z')
			c = ((c - 'a' - shift) % 26) + 'a';
		else
		{
			if (c >= 'A' && c <= 'Z')
			{
				c = ((c - 'A' - shift) % 26) + 'A';
			}
			if (c >= 'А' && c <= 'Я')
			{
				c = ((c - 'А' - shift) % 32) + 'А';
			}
			else if (c >= 'а' && c <= 'я')
			{
				c = ((c - 'а' - shift) % 32) + 'а';
			}
		}
	}
	return buff;
}


int main()
{
	setlocale(LC_ALL, "russian");
	system("chcp 1251");
	system("cls");
	int choose, shift;
	string buff, path;
	do
	{
		cout << "Выберите режим работы программы. 1 - шифрование, 2 - дешифровка, 0 - выход из программы" << endl;

		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "Введите имя или путь до файла для шифрования" << endl;
			cin >> path;
			buff = read(path, buff);
			if (buff == "")
			{
				return 0;
			}
			cout << "Введите величину сдвига" << endl;
			cin >> shift;
			buff = encrypt(buff, shift);
			write(path, buff);
			break;
		case 2:
			cout << "Введите имя или путь до файла для дешифровки" << endl;
			cin >> path;
			buff = read(path, buff);
			if (buff == "")
			{
				return 0;
			}
			cout << "Введите величину сдвига" << endl;
			cin >> shift;
			buff = decrypt(buff, shift);
			write(path, buff);
			break;
		default:
			break;
		}

	} while (choose != 0);
	



	system("pause");
	return 0;
}
