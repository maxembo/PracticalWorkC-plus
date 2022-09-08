#include <iostream>


void FindEvenNumbers(int n)
{

	std::cout << "\nВывод четных чисел:";

	for (int i = 0; i < n; i += 2)	std::cout << i << ",";
}

void FindOddNumbers(int n)
{
	std::cout << "\n\nВывод нечетных чисел: ";

	for (int i = 1; i - 1 < n; i += 2) std::cout << i << ",";
}

int main()
{
	std::setlocale(LC_ALL, "Rus");

	FindEvenNumbers(20);
	FindOddNumbers(20);

	return 0;
}