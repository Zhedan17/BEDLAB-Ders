#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main1()
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("e uzeri %d:%.2f\n ",i, exp(i));
	}
}
// Eger ki exp komutunu kullanirsan e'nin uzerlerini alir.
// Ama exp2 kullanirsan 2'nin kuvvetlerini almis olursun.

void main2()
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		printf("2 uzeri %d:%.f\n ", i, exp2(i));
	}
}

void main3()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("2 uzeri %d:%.2f\n ", i, sqrt(i));
	}
}
// sqrt fonksiyonu sayýnýn kare kokunu alir.


void main4()
{
	int Number1, Number2;
	printf("Please enter two number.");
	scanf_s("%d%d", &Number1,&Number2);
	printf("%d uzeri %d = %.f\n\n", Number1, Number2, pow(Number1, Number2));

}
//pow komutu verilen 1. sayinin taban 2. sayinin ise us olmasini saðlar.


void main5()
{
	int Number1;
	printf("Please enter a number.");
	scanf_s("%d", &Number1);
	printf("log(%d) = %.f\n\n", Number1, log(Number1));

}
// log() fonksiyonu icine yazilan sayinin 10 tabaninda logaritmasini alarak cikti verir.



// Matematik fonksiyonlarý float cinsinden cikti verdigi icin %f kullanilir.
int main()
{
	main1();
	printf("\n\n");
	main2();
	printf("\n\n");
	main3();
	printf("\n\n");
	main4();
	printf("\n\n");
	main5();
	return 0;
}
