#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[] = "Mehmet";
	printf("%s\n", name);

	int i;
	for (i = 0; i <= 6; i++)
	{
		printf("%c\n", name[i]);
	}

	/*char yname[30];
	printf("\nPlease enter your name.");
	fgets(yname, sizeof(yname), stdin);
	printf("Your name is %s. ", yname);*/

	char yname[30];
	printf("\nPlease enter your name.");
	gets_s(yname);
	printf("Your name is %s. ", yname);

	return 0;
}