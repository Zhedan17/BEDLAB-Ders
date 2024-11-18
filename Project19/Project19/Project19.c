#include <stdio.h>

/*void main()
{
	int i, j;

	for (i = 1; i <= 4;i++) {
		for (j = 1; j <= 3; j++)
		{
			printf("  I love C\n");

		}
		printf("------------\n");
	}



}*/

void main()
{
	int i, j;

	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= 3; j++)
		{
			printf("I love C");
			if (j!=3)
			{
				printf(" - ");
			}
			

		}
		printf("\n-------------------------------\n");
	}



}