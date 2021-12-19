//спиннеры задача 3
#include <iostream>


using namespace std;


int main() 
{
	int n, m;
	cin >> n;
	cin >> m;
	int ans_x = 0;
	int ans_y = 0;

	for (int i = 0; i < n; i++)
	{
		ans_x += n - i;
	}
	for (int i = 0; i < m; i++)
	{
		ans_y += m - i;
	}

	cout << ans_x * ans_y << endl;


	system("pause");
	return 0;
}
