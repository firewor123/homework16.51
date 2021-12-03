#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

int main()
{
	auto now = time(nullptr);
	const auto ltm = localtime(&now);
	const int N = 4;
	int array[N][N];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			array[i][j] = i + j;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			std::cout << " ";
			std::cout << array[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "\n";

	static int number;

	for(auto i =0;i<N; i++)
	{
		if (i == ltm->tm_mday % N)
		{
			for(auto j =0; j <N; j++)
			{
				number += array[i][j] ;
			}
		}

		if (ltm->tm_mday % N == i)
		{
			std::cout << "string " << i << " " << "number " << number << " ";
		}
	}

	return 0;

}

