#include <iostream>
#include <cstdlib>
#include <utility>

int main()
{
	setlocale(0, "");
	int m[10]{ 4,250,2,438,3,357,1,254,5,300 };
	for (int f = 0; f < 5; f++)
	{
		int p = 0;
		for (int i = 4; i >= 0; i--)
		{
			if (m[i*2] < m[(i*2) - 2] && i != 0)
			{
				std::swap(m[i*2], m[(i*2) - 2]);
				std::swap(m[(i * 2)+1], m[((i * 2)+1) - 2]);
				p++;
			}
		}
		if (p == 0)
		{
			break;
		}

		for (int i = 0; i < 10; i++)
		{
			std::cout << m[i] << "	";
			if (i % 2 != 0)
			{
				std::cout << '\n';
			}
		}
		std::cout << '\n';
		
	}
	system("pause");
	return 0;
}