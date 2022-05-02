#include<iostream>

int main()
{

	int a = 10;
	int b = 20;

	float fa = 10.f;
	float fb = 20.f;

	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a * b << std::endl;
	std::cout << a / b << std::endl;
	std::cout << a % b << std::endl;

	std::cout << fa + fb << std::endl;
	std::cout << fa - fb << std::endl;
	std::cout << fa * fb << std::endl;
	std::cout << fa / fb << std::endl;
	std::cout << (int)fa % (int)fb << std::endl; //실수형은 안된다. 그래서 정수형으로 형변환한거임.

	return 0;
}