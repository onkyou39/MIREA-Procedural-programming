#include <iostream>
#include <algorithm>

using namespace std;

int section(int k)
{
	if (k <= 36)
	{
		return (k - 1) / 4;
	}
	else
	{
		return 8 - (k - 37) / 2;
	}
}

int main()
{
    setlocale(LC_ALL, "Russian");
	int count[9];
	for (int i = 0; i < 9; i++)
	{
		count[i] = 0;
	}
	int n;
	int buff;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> buff;
		count[section(buff)]++;
	}
	int ans = 0;
	int curr = 0;
	for (int i = 0; i < 9; i++)
	{
		if (count[i] == 6)
		{
			curr++;
			ans = max(ans, curr);
		}
		else
		{
			curr = 0;
		}
	}
	cout << ans;
    return 0;
}
