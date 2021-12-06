#include <iostream>
#include <vector>

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");
	int n;
	cout << "Введите n: ";
	cin >> n;
	vector <bool> A(n + 1, true);
	A[0] = A[1] = false;
	for (int i = 2; i <= n; i++)
	{
		if (A[i])
		{
			if (1ll * i * i <= n) //приведение к типу long long на случай переполнения
			{
				for (int j = i * i; j <= n; j+=i)
				{
					A[j] = false;
				}
			}
		}
	}

	for (int i = 0; i < A.size(); i++)
	{
		if (A[i])
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}
