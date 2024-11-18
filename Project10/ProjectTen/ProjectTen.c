#include <stdio.h>
#include <stdlib.h>

void subhead()
{
	if (70 > 19)
	{
		printf("70 is bigger than 19\n\n\n");
	}

	int Number1, Number2;
	Number1 = 27;
	Number2 = 36;
	if (Number1 < Number2);
	{
		printf("Number1(%d) is smaller than Number2(%d).\n\n\n", Number1, Number2);
	}

	/*int Number3;
	printf("Enter a score:");
	scanf_s("%d", &Number3);
	if (Number3 >= 51) {
		printf("Congratulations you pass the exam.\n");
		printf("You'r result is: %d\n\n", Number3);
	}
	else {
		printf("You are failed in exam.\n\n\n");
	}
	*/

	int Number4;
	printf("Plase enter you'r exam result:");
	scanf_s("%d", &Number4);
	if (Number4 >= 90) {

		printf("You are got a A.");
	}
	else if (Number4 >= 80) {

		printf("You are got a B.");
	}
	else if (Number4 >= 70) {

		printf("You are got a C.");
	}
	else if (Number4 >= 60) {

		printf("You are got a D.");
	}
	else if (Number4 >= 50) {

		printf("You are got a E.");
	}
	else {

		printf("You are got a F and failed exam");
	}
}
	
int main()
{		
	subhead();
	return 0;
}
