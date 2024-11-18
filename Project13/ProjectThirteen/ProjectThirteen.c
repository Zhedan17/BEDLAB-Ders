#include <stdio.h>
#include <stdlib.h>

void main()
{
	int day;
	printf("Please enter number of day(1 to 7):");
	scanf_s("%d", &day);
	printf("\n\n");

	switch (day) {
		case 1:printf("Monday");
			break;
		case 2:printf("Thuesday");
			break;
		case 3:printf("Wednesday");
			break;
		case 4:printf("Thursday");
			break;
		case 5:printf("Friday");
			break;
		case 6:printf("Saturday");
			break;
		case 7:printf("Sunday");
			break;
		default:printf("Don't exceed your limits!");

	}
	printf("\n\n");

}