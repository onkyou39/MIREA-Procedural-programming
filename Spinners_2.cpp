//спиннеры задача 2
#include <iostream>


using namespace std;


int main() 
{
	int m;
	int three, four;
	cin >> m;
	
	four = m % 3;
	three = (m - 4 * four) / 3;

	if (three >= 0)
	{
		cout << three << endl;
		cout << four << endl;
	}
	else
	{
		cout << 0 << endl;
		cout << 0 << endl;
	}

	system("pause");
	return 0;
}
