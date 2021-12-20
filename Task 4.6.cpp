#include <iostream>
#include <typeinfo>
using namespace std;

#include <vector>

int main()
{
    setlocale(LC_ALL, "Russian");

    string rome_num = " ";
    char rome_syms[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
    vector<int> rome_num_values;
    int count = 0;
    int sum = 0;

    cout << "Введите число в римской записи: ";
    cin >> rome_num;

    for (char sym : rome_num)
    {
        for (char rome_sym : rome_syms)
        {
            if (sym == rome_sym) { count++; continue; }

            else { continue; }
        }
        if (count > 0)
        {
            count = 0;
        }
        else
        {
            cout << "Введенное число не соответствует римской записи" << "\n";
            break;
        }
    }

    for (char sym : rome_num)
    {
        if (sym == 'I')
        {
            rome_num_values.push_back(1);
        }
        else if (sym == 'V')
        {
            rome_num_values.push_back(5);
        }
        else if (sym == 'X')
        {
            rome_num_values.push_back(10);
        }
        else if (sym == 'L')
        {
            rome_num_values.push_back(50);
        }
        else if (sym == 'C')
        {
            rome_num_values.push_back(100);
        }
        else if (sym == 'D')
        {
            rome_num_values.push_back(500);
        }
        else if (sym == 'M')
        {
            rome_num_values.push_back(1000);
        }
    }

    //for (int i = 0; i < rome_num_values.size(); i++)
    //{
    //    cout << rome_num_values[i] << endl;
    //}

    for (int i = 1; i < rome_num_values.size(); i++)
    {
        if (rome_num_values[i] > rome_num_values[i - 1])
        {
            sum += -1 * rome_num_values[i - 1];
        }
        else
        {
            sum += rome_num_values[i - 1];
        }
    }

    sum += rome_num_values[rome_num_values.size() - 1];

    cout << "Число в арабской записи:" << sum << "\n";

}
// MCD CMD
