#include <iostream>
// -1 comment
// test
// correci
int main ()
{

	int a;
	a = 10;

	int b;
	b = 3;

	int c;
	c = a + b;
	std::cout << a << " + " << b << " = " << c << '\n';

	int d;
	d = a - b;
	std::cout << a << " - " << b << " = " << d << '\n';

	int e;
	e = a * b;
	std::cout << a << " * " << b << " = " << e << '\n';
// add div and expo
	
	int f;
	/*
	 если b не равно 0 
	 	с = a / b
	иначе
		вывести ошибку
	 */
	f = a / b;
	if (b != 0)
	{
		f = a / b;
	}
	else
	{
		std::cout << "Error!\n";
	}
	std::cout << a << " / " << b << " = " << f << '\n';


	/*for (действие до начала цикла;
             проверка условия продолжения цикла;
	     действие после каждой итерации цикла)
	     {
	     	тело цикла
	     }
	 */
	int g = 1;
	for (int i = 0; i < b; ++i)
	{
	g = g * a;
	}
	std::cout << a << " ^ " << b << " = " << g << '\n';

	
}
