#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int i, notes[5] = { 15,25,20,61,84 }; // Arraylerde sirasina g�re degil indisine gore s�ralama olur.
	notes[0] = 100;
	printf("%d\n\n", notes[0]);

	for(i=0;i<=4;i++)
	{
		printf("%d\n", notes[i]);
	}

	int notes2[3];
	notes2[0] = 8;
	notes2[1] = 54;
	notes2[2] = 16; // Arrayler bu sekilde de deger alabilir.

	return 0;
}