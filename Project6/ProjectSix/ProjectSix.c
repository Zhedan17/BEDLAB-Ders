#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void subhead() 
{
	int NumberOne, bolum, kalan, sum;
	sum = 0;

	printf("Please enter 4 digits number:");
	scanf("%d", &NumberOne);

	bolum = NumberOne / 1000;
	sum += bolum;
	kalan = NumberOne % 1000;

	bolum = kalan / 100;
	sum += bolum;
	kalan = kalan % 100;

	bolum = kalan / 10;
	sum += bolum;
	kalan = kalan % 10;

	sum += kalan;
	printf("The results of sum of digits: %d\n", sum);
}

int main()
{
	subhead();
	return 0;
}