#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, unit;
	int numbers[100];

	printf("Please enter a positive number.\n");
	scanf_s("%d", &unit);

	printf("Enter array numbers.");
	for (i = 0; i < unit; i++)
	{
		scanf_s("%d", &numbers[i]);
	}
	printf("\n\n");
	for(j=0; j<unit; j++)
	{
		printf("%d\n", numbers[j]);
	}

	return 0;
}