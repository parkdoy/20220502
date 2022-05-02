#include<iostream>


int main()
{
	int a = 10;
	int b=20;
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
	std::cout << (int)fa % (int)fb << std::endl;

}