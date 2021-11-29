#include <iostream>
using namespace std;
// Отображение шестнадцатеричной цифры
char digit(int num)
{
    switch (num) {
    case 0: return '0';
    case 1: return '1';
    case 2: return '2';
    case 3: return '3';
    case 4: return '4';
    case 5: return '5';
    case 6: return '6';
    case 7: return '7';
    case 8: return '8';
    case 9: return '9';
    case 10: return 'A';
    case 11: return 'B';
    case 12: return 'C';
    case 13: return 'D';
    case 14: return 'E';
    case 15: return 'F';
    }
}
// Получение целой части числа
int dectox_int(int a, int p, char* s)
{
    int num = (int)a;
    int rest = num % p;
    num /= p;
    if (num == 0)
    {
        s[0] = digit(rest); return 1;
    }
    int k = dectox_int(num, p, s);
    s[k++] = digit(rest);
    return k;
}
// Получение дробной части числа
void dectox_double(double a, int p, char* s)
{
    int iter = 0;
    int k = 0;
    double a1 = a;
    do {
        a1 = a1 * p;
        int num = (int)(a1);
        s[k++] = digit(num);
        a1 -= (int)a1;
        iter++;
    } while (a1 > 0.00000001 && iter < 10);
    s[k] = '\0';
}
int main()
{
    double a;
    char s[80] = { 0 };
    int p;
    system("chcp 1251");
    system("cls");
    cout << "Введите число: ";
    cin >> a;
    cout << "Введите основание системы счисления: ";
    cin >> p;
    int k = dectox_int((int)a, p, s);
    s[k++] = ',';
    dectox_double(a - (int)a, p, &s[k]);
    cout << s;
    cin.get(); cin.get();
    return 0;
}
