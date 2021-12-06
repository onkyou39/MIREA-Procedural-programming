//задание "Ряды", вариант 18

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

float average_height(vector<float> &height)
{
	float average = 0;
	for (int i = 0; i < height.size(); i++)
	{
		average += height[i];
	}
	average /= height.size();
	return average;
}

int above_average(vector<float> &height, int average)
{
	int count = 0;
	for (int i = 0; i < height.size(); i++)
	{
		if (height [i] > average)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	setlocale(LC_ALL, "russian");
	//cout.width(60);
	cout << "**** Анализ роста учеников ***\nВведите рост (см) и нажмите <Enter>.\nДля завершения введите 0 и нажмите <Enter>" << endl;
	vector<float> height;
	float temp;
	cin >> temp;
	if (temp)
	{
		height.push_back(temp);
	}
	else
	{
		return 0;
	}
	while (temp)
	{
		cin >> temp;
		if (temp)
		{
			height.push_back(temp);
		}
	}
	float average = average_height(height);
	cout << "Средний рост: " << average << " см" << endl;
	int above = above_average(height, average);
	if (above)
	{
		if (above % 10 == 1)
		{
			cout << "У " << above << "-го" << " человека рост превышает средний." << endl;
		}
		else
		{
			cout << "У " << above << "-х" << " человек рост превышает средний." << endl;
		}
	}
	system("pause");
	return 0;
}
