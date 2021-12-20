#include <iostream>
using namespace std;

int fact(int n)
{
    if (n > 1) return  n * fact(n - 1);
    else return n;
}

int perestanovka(bool select[], int n, int step = 0)
{
    int count = 0;
    if (step >= n)
    {
        count = 1;
    }
    else {
        for (int i = 0; i < n; i++)
        {
            if ((i != step) and !select[i])
            {
                select[i] = 1;
                count += perestanovka(select, n, step + 1);
                select[i] = 0;
            }
        }
    }

    return count;
}

int main()
{
    setlocale(LC_ALL, "russian");
    cout << "Введите количество шариков" << endl;
    int n;
    cin >> n;
    bool* arr = new bool[n];
    cout << fact(n) - perestanovka(arr, n) << endl;
    delete[] arr;
    return 0;
}
