#include <stdio.h>
#include <stdlib.h>

void theMessage();
int sumNumbers(int, int);

int main ()
{
	int result = sumNumbers(5,8);
	printf("Result is %d\n", result);
	
	theMessage();

	return 0;
}

void theMessage()
{
	printf("This is epic. C\n");
}

int sumNumbers(int x,int y)
{
	return x + y;
}