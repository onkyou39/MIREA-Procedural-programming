#include <iostream>
#include <string>
#include <cstring>
#include <typeinfo>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

char model[16] = { '0', '1','2','3','4','5','6','7','8','9','A', 'B', 'C', 'D', 'E', 'F' };

int conversion_to_int(string s, int a) {
    // переводим наше число в десятичное
    int len = s.size();  //длина числа
    int true_value, result = 0;
    for (int i = len; i > 0; i--) {
        for (int k = 0; k < 16; k++) {
            if (s[i - 1] == model[k]) {
                true_value = k;
                break;
            }
        }
        result += true_value * pow(a, len - i);
    }
    return result;
}

string conversion_to_other(string s, int q, int l) {
    // перевод десятичного числа в новую сс
    int num = conversion_to_int(s, q);
    string number;
    while (num > 0)
    {
        number += model[num % l];
        num /= l;
    }
    reverse(number.begin(), number.end());
    return number;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int ss_old;
    string num_old;
    int ss_new;
    string num_new;

    cout << "Введите систему счисления исходного числа: ";
    cin >> ss_old;
    cout << "Введите исходное число: ";
    cin >> num_old;
    cout << "Введите целевую систему счисления: ";
    cin >> ss_new;

    cout << conversion_to_other(num_old, ss_old, ss_new);
}
