//спиннеры задача 1
#include <iostream>


using namespace std;


int main() 
{
	int a, b, c;
	int n = 0;
	int cost = 0;
	cin >> a;
	cin >> b;
	cin >> c;

	for (n; cost < c; n++)
	{
		cost = (a + b) * n;
	}


	cout << n << endl;

	system("pause");
	return 0;
}
