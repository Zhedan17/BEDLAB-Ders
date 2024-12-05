#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double myValue, myArray[10];
	int choice, index;
	do 
	{
		printf("Make a choice.\n-1 Exit the program.\n1 Write a Array.\n2 Read from Array.\n");
		scanf_s("%d", &choice);
		if (choice == -1) break; 
		if (choice != 1 && choice != 2) 
		{
			printf("Please enter valid number.\n\n");
			continue;
		}
		printf("Enter array index:");
		scanf_s("%d", &index);
		if(index<0 || index>9)
		{
			printf("Ýndex should be in the range of 0-9");
			continue;
		}
		switch(choice)
		{
		case 1:printf("\nEnter the value:");
			scanf_s("%lf", &myValue);
			myArray[index] = myValue;
			printf("\nValue succesfully entered.");
			break;
		case 2:printf("The index you entered equal to %.2f.(myArray[%d] = %.2f)\n", myArray[index], index, myArray[index]);
			break;
		}
		
	} while (choice != -1);
		
	return 0;
}
