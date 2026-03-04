// Переделываем калькулятор в функции 
#include <iostream>

int addition(int a, int b)
{
	return a + b;
}

int subtraction(int a, int b)
{
	return a - b;
}

int multiplication (int a, int b)
{
	return a * b;
}

int division (int a, int b)
{
	return a / b;
}

int exponentiation(int a, int b)
{
	int c = 1;
	for(int i = 0; i < b ; ++i)
	{
	c = c * a;
	}
	return c;
}

	void printResult(int a, int b, int c, char operation)
	{
		std::cout << a << " " << operation << " " << b << " = " << c << '\n';
	}

int main ()
{
	int a = 5;
	int b = 0;
	int c = 0;

	c = addition(a, b);
	printResult(a, b, c, '+');

	c = subtraction(a, b);
	printResult(a, b, c, '-');

	c = multiplication (a, b);
	printResult(a, b, c, '*');

	if (b != 0)
	{
		c = division(a, b);
		printResult(a, b, c, '/');
	}
	else
	{
	std::cout << "Error!" << '\n';
	}

	c = exponentiation(a, b);
	printResult(a, b, c, '^');
}
