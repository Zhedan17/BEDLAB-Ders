#include <stdio.h>

void main()
{
	int i, number;
	number = 0;
	i = 1;
		
	printf("Enter a number between 1 and 10.");
	scanf_s("%d", &number);

	if (number>10 || number<1)
	{
		printf("Please don't do that.\n");
			return 0;
	}
	
	while (i<=10) 
	{
		printf("%d x %d = %d\n", number, i , number*i);
		i++;
	}


}