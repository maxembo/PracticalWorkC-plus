#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Rus");
	std::string name = "Maxim Popov";

	std::cout<< "Строка: " << name;

	std::cout << "\nДлина строки: " << name.length();

	std::cout << "\nПервой символ: " << name.front();

	std::cout << "\nПоследний символ: " << name.back();

	return 0;
}

