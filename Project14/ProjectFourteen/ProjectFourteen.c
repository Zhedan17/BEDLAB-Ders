#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>

int main()
{
	int Day;
	char DayName[10];
	int NumberOfProduct = 0;

	printf("Please enter a day (1-7): ");
	scanf_s("%d", &Day);

	switch (Day)
	{
	case 7:
		NumberOfProduct += 18;
		
		

	case 6:
		NumberOfProduct += 5;
		
		

	case 5:
		NumberOfProduct += 13;
		
		

	case 4:
		NumberOfProduct += 10;
		
		

	case 3:
		NumberOfProduct += 1;
		
		

	case 2:
		NumberOfProduct += 5;
		
		

	case 1:
		NumberOfProduct += 2;
	
		break;

	default:
		printf("Invalid day entered.\n");
		return 1;  // Programdan çýkmak için
	}

	printf("Workers sell % d product.\n", NumberOfProduct);

	return 0;
}