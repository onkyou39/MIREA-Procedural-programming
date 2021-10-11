#include <iostream>
#include <ctime>

using namespace std;

void str_print(char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		cout << str[i];
	}
}

void sort(char* str, int n)
{
	char temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (str[i] > str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}

void randstrgen(char* str, int n)
{
	char charset[] = "абвгдежзиклмнопрстуфхцчшщъыьэюя";
	srand(time(NULL));
	
	for (int i = 0; i < n - 1; i++)
	{
		str[i] = charset[rand() % strlen(charset)];
	}
	str[n - 1] = '\0';
}

int main()
{
	setlocale(LC_ALL, "Russian");
	char str[31];
	randstrgen(str, sizeof(str));
	str_print(str);
	cout << endl;
	sort(str, strlen(str));
	str_print(str);
	return 0;
}
