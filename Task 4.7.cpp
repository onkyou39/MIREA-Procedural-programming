#include <iostream>
#include <typeinfo>
#include <ctime>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");

    const int m = 37;
    const int b = 3;
    const int c = 64;
    int num = 0;
    int s = 0;
    srand(time(NULL));

    num = rand();

    for (int i = 1; i < num + 1; i++)
    {
        s = (s * m + b) % c;
    }

    cout << s << "\n";
}
