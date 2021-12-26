//задание файлы вариант 4

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	char buff[1024] = {};
	string line;
	int c = 0;
	string max_word;
	string max_word_n;

	ofstream fout;
	fout.open("input.txt");
	fout << "C++ — компилируемый, статически типизированный язык программирования общего назначения.\nПоддерживает такие парадигмы программирования как процедурное программирование, объектно-ориентированное программирование, обобщённое программирование. ";
	fout.close();

	ifstream fin("input.txt");

	cout << "Текст из файла: ";

	while (getline(fin, line))
	{
		cout << line << "\n";
		for (int i = 0; i < line.size(); i++)
		{
			if (line[i] != ' ')
			{
				max_word += line[i];
			}
			else
			{
				if (max_word.size() > max_word_n.size())
				{
					max_word_n = max_word;
				}
				max_word = "";
			}
		}
	}

	cout << "\n" << "Самое длинное слово в тексте: " << max_word_n << "\n";

	fin.close();
	system("pause");
	return 0;
}
