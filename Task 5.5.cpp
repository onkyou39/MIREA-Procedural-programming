//задание "Файлы", вариант 53

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <string>
#include <locale>
#include <algorithm>

using namespace std;

struct Students
{
	string surname;
	string id;
};

void name_sort(vector<Students> &database)
{
	Students temp;
	sort(database.begin(), database.end(), [](Students a, Students b) {return a.surname < b.surname; });
}

void id_sort(vector<Students> &database)
{
	sort(database.begin(), database.end(), [](Students a, Students b) {return a.id < b.id; });
}

bool write(vector<Students> &database)
{
	fstream file;
	file.open("database.txt", ios_base::out | ios_base::trunc);
	if (!file.is_open())
	{
		cout << "Ошибка открытия файла" << endl;
		return false;
	}

	for (int i = 0; i < database.size(); i++)
	{
		file << database[i].surname << "\t" << database[i].id << endl;
	}
	file.close();
	cout << "Успешная запись в файл" << endl;
	return true;
}

void rewrite(vector<Students> &database)
{
	char rewrite_flag;
	do
	{
		cout << "Перезаписать файл? (д/н)" << endl;
		cin >> rewrite_flag;
		if (rewrite_flag == 'д')
		{
			if (!write(database))
			{
				cout << "Ошибка перезаписи файла. Файл не был изменён" << endl;
			}
			else
			{
				cout << "Файл успешно перезаписан" << endl;
			}
		}
		else
		{
			cout << "Файл не был перезаписан" << endl;
		}
	} while (rewrite_flag != 'д' && rewrite_flag != 'н');
	
}


int main()
{
	setlocale(LC_ALL, "russian");
	system("chcp 1251");
	system("cls");

	cout << "После завершения ввода данных введите в поле \"фамилия\" минус <-> и нажмите <Enter>" << endl;

	vector<Students> database;
	Students temp;
	temp.surname = "";

	while (true)
	{
		cout << "Введите фамилию студента:" << endl;
		cin >> temp.surname;
		if (temp.surname == "-")
		{
			break;
		}
		cout << "Введите шифр студента:" << endl;
		cin >> temp.id;
		database.push_back(temp);
	}

	if (!write(database))
	{
		cout << "Выход из программы" << endl;
		return 0;
	}
	
	
	int choose;
	char rewrite_flag;

	do
	{
		cout << "\nВыберите дальнейшее действие вводом цифры от 0 до 3" << endl;
		cout << "0 - выход из программы\n1 - сортировка по фамилии\n2 - сортировка по шифру\n3 - вывод данных в консоль" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
			name_sort(database);
			cout << "\nБаза данных отсортирована по фамилии" << endl;
			rewrite(database);
			break;
		case 2:
			id_sort(database);
			cout << "\nБаза данных отсортирована по шифру" << endl;
			rewrite(database);
			break;
		case 3:
			cout << "\n\nФамилия" << "\t" << "Шифр\n" << endl;
			for (int i = 0; i < database.size(); i++)
			{
				cout << database[i].surname << "\t" << database[i].id << endl;
			}
			break;
		default:
			break;
		}
	} while (choose != 0);

	system("pause");
	return 0;
}
