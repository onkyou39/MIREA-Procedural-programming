//былая слава
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	for (int i = 0; i < 13; i++)
	{
		if (i < 6) {
			if (i % 2 == 0) {
				for (int j = 0; j < 8; j++)
				{
					cout << "*  ";
				}
				cout.width(48);
				cout << std::setw(48) << setfill('/');
			}
			else {
				cout << "";
				for (int j = 0; j < 8; j++)
					cout << "*  ";
			}
			cout << '\n';
		}

	}

	for (int i = 0; i < 7; i++)
		if (i % 2 == 0)
			cout << setw(72) << setfill('/') << '\n';
		else
			cout << setw(72) << setfill(' ') << '\n';
	system("pause");
	return 0;
}
