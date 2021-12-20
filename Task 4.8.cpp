#include <iostream>
#include <algorithm>
#include <vector>
#include <typeinfo>
#include <math.h>

using namespace std;

float max_element(float a[3])
{
    float max = -1;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return(max);
}

float min_element(float a[3])
{
    float min = 1000.0;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return(min);
}

int index(float el, float a[3])
{
    for (int i = 0; i < 3; i++)
    {
        if (el == a[i])
        {
            return i;
        }
    }
}

float sum(float a[3])
{
    float result = 0;
    for (int i = 0; i < 3; i++)
    {
        result += a[i];
    }
    return result;
}

int main()
{

    setlocale(LC_ALL, "Russian");

    float items[3][4] =
    {
        {5, 2, 0, 10},
        {3, 5, 2, 5},
        {20, 0, 0, 0}
    };
    float prices[4][2] =
    {
        {1.2, 0.5},
        {2.8, 0.4},
        {5.0, 1.0},
        {2.0, 1.5}
    };
    float c[3][2];
    float money[3];
    float comissions[3];
    float money_without_comissions[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 4; k++)
            {
                c[i][j] += items[i][k] * prices[k][j];
            }
        }
    }

    cout << "Матрица товаров: " << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << items[i][j] << " ";
        cout << endl;
    }

    cout << "Матрица цен: " << "\n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << prices[i][j] << " ";
        cout << endl;
    }

    cout << "Итоговая матрица: " << "\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        money[i] = c[i][0] + c[i][1];
    }

    for (int i = 0; i < 3; i++)
    {
        comissions[i] = c[i][1];
    }

    for (int i = 0; i < 3; i++)
    {
        money_without_comissions[i] = c[i][0];
    }

    cout << "Заработок каждого продавца: " << "\n";
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". " << money[i] << "\n";
    }

    cout << "Больше всех заработал " << index(max_element(money), money) + 1 << " продавец, " << "меньше всех заработал " << index(min_element(money), money) + 1 << " продавец." << "\n";
    cout << "Наибольшие комиссионные получил " << index(max_element(comissions), comissions) + 1 << " продавец, " << "наименьшие получил " << index(min_element(comissions), comissions) + 1 << " продавец." << "\n";
    cout << "Общая сумма вырученных денег равна " << sum(money_without_comissions) << "." << "\n";
    cout << "Продавцы получили комиссионными " << sum(comissions) << "." << "\n";
    cout << "Всего через продавцов прошло " << sum(money_without_comissions) + sum(comissions) << "." << "\n";
}
