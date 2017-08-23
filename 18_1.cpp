#include <iostream>
#include <cstdlib>
#include <utility>

int main()
{
	setlocale(0, "");
	int m[10]{ 1,3,5,6,8,7,2,4,9,0 };
	for (int f = 0; f < 10; f++)
	{
		for (int i = 9; i >= 0; i--)
		{
			if (m[i] < m[i - 1] && i != 0)
			{
				std::swap(m[i], m[i - 1]);
			}
		}


		for (int i = 0; i < 10; i++)
		{
			std::cout << m[i];
		}
		std::cout << '\n';
	}
	system("pause");
	return 0;
}