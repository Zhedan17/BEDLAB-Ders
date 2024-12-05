#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int vize, final, sonuc;
	printf("Please enter your first exam result\n");
	scanf_s("%d", &vize);
	printf("Please enter your second exam result\n");
	scanf_s("%d", &final);
	sonuc = (vize * 40 / 100) + (final * 60 / 100);
	printf("Your total score is:%d \n", sonuc);
}