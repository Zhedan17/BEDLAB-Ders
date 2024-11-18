#include <stdio.h>
#include <stdlib.h>

void main()
{

	int partyA, partyB, partyC, currentCouncilor, neededCouncilor ;
	const int sumCouncilor= 600;
	printf("Lutfen meclisteki vekillerin sayilarini giriniz. Her partinin sayisini ayri ayri giriniz.");
	scanf_s("%d %d %d", &partyA, &partyB, &partyC);
	currentCouncilor = partyA + partyB + partyC;

	if (currentCouncilor >= 301)
	{
		printf("Toplanti yapilabilir.");
	}
	else
	{
		neededCouncilor = 301 - currentCouncilor;
		printf("Toplanti yapabilmek icin en az su kadar daha uye lazim: %d\n\n\n", neededCouncilor);
	}

}