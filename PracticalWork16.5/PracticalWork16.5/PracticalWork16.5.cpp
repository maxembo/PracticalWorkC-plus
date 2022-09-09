#include <iostream>
#include <time.h>

int const rows = 5;
int const cols = 5;

int arr[rows][cols];

void FullArray()
{
	for (unsigned int i = 0; i < rows; ++i)
	{
		for (unsigned int j = 0; j < cols; ++j)
		{
			arr[i][j] = i + j;
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void IndexArrayByDate()
{
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	for (unsigned int i = 0; i < rows; ++i)
	{
		for (unsigned int j = 0; j < cols; ++j)
		{
			arr[i][j] = i + j;
			if (buf.tm_mday % 5 == i) std::cout << arr[i][j] << " ";
		}
	}
}

int main()
{
	std::cout << "\nArray filling:\n\n";
	FullArray();

	std::cout << "\nResult = ";
	IndexArrayByDate();

	return 0;
}