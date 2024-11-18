#include <stdio.h>

void subhead(int x,int y)
{
	//int x, y
	int sum, div, sub, mul, mod;
	/*x = 5;
	y = 2;*/

	sum = x + y;
	sub = x - y;
	mul = x * y;
	div = x / y;
	mod = x % y;

	printf("Sum: %d\n", sum);
	printf("Subtraction: %d\n", sub);
	printf("Multiplication: %d\n", mul);
	printf("Division: %d\n",div);
	printf("Mod: %d\n", mod);

}


void main()
{
	subhead(10, 7);

}


