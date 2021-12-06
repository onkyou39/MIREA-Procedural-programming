#include <iostream>
#include <iomanip>
int main()
{
	for (int i = 0; i < 13; ++i)
	{
		if (i < 7) {
			if (0 == i % 2) {
				for (int j = 0; j<4; ++j)
				{
					std::cout << "  *";
				}
				std::cout.width(60);
				std::cout << std::setw(60) << std::setfill('/');
			}
			else {
				std::cout << " ";
				for (int j = 0; j < 4; ++j)
					std::cout << "*  ";
			}
			std::cout << '\n';
		}

	}

	for (int i = 0; i<18; ++i)
		if (0 == i % 2)
			std::cout << std::setw(72) << std::setfill(' ') << '\n';
		else
			std::cout << std::setw(72) << std::setfill('/') << '\n';
	system("pause");
	return 0;
}
