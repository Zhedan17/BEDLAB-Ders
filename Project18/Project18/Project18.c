#include <stdio.h>
#include <stdlib.h>

void main() {
	int i, fact, number;
	fact = 1;

	printf("Enter a number please. ");
	scanf_s("%d", &number);

	for (i=1;i<=number;i++)
	{
		fact *= i;
	}

	printf("%d! = %d\n", number, fact);
}