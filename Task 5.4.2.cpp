//задание "Ряды", вариант 53

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

float average(vector<float> &sequence)
{
	float average = 0;
	for (int i = 0; i < sequence.size(); i++)
	{
		average += sequence[i];
	}
	average /= sequence.size();
	return average;
}


int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Обработка последовательности дробных чисел. После ввода каждого числа нажимайте <Enter>" << endl;
	cout << "Для завершения работы программы нажмите <Enter>." << endl;
	float temp, avr;
	float sum = 0.0;
	int count = 0;
	vector<float> sequence;
	while (cin.get() != '\n')
	{
		cin.unget();
		cin >> temp;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		count++;
		sum += temp;
		sequence.push_back(temp);
		avr = average(sequence);
		cout << "Введено чисел: " << count << " Сумма: " << sum << " Сред.арифметическое: " << avr << endl;
	}

	system("pause");
	return 0;
}
