#include <stdio.h>

int sumNumber(int i);

int main ()
{
	int j;
	printf("Please enter a number for sum with smaller numbers(to 0)");
	scanf_s ("%d", &j);
	int result = sumNumber(j);
	printf("Result is:%d", result);
	return 0;
}

int sumNumber(int i)
{
	if (i>0) 
	{
		return i + sumNumber(i - 1);
	}
	else 
	{
		return 0;
	}
}