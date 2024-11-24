#include <stdio.h>
#include <stdlib.h>

void allNumbers(int myNumbers[6])
{
	for (int i=0; i<6; i++)
	{
		printf("%d\n", myNumbers[i]);
	}

}

int ShowMe(int x) 
{
	return 5 + x;
}

int Number(int x,int y)
{	
	return x + y;
}

 int main()
 {
	 int myNumbers[6] = { 10,20,30,40,50,60 };
	 allNumbers(myNumbers);
	 printf("\n\n");

	 printf("Result is %d\n\n", ShowMe(2));

	 printf("Sum of entered number: %d\n\n", Number(1,6));
	 return 0;
 }