#include <iostream>
#include <cstdlib>
#include <utility>

int main()
{
	setlocale(0, "");
	int m[10]{ 1,3,5,6,8,7,2,4,9,0 };
	int l = 0;
	while (l<9)
	{
		int min = 2147483647, minp = 0;
		for (int i = l; i < 10; i++)
		{
			if (m[i] < min)
			{
				min = m[i];
				minp = i;
			}
			/*
			if (m[i] > max)
			{
			max = m[i];
			maxp = i;
			}
			}
			*/
		}
		std::swap(m[minp], m[l]);
		l++;
		//std::swap(m[maxp], m[r]);
		//r--;
		for (int i = 0; i < 10; i++)
		{
			std::cout << m[i];
		}
		std::cout << '\n';
	}
	system("pause");
	return 0;
}