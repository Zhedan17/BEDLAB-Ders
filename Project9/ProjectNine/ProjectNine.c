#include <stdio.h>
/* Kapalý kaptaki gazýn basýncýný hesaplama
(Mol sayýsý * R sabiti * Sýcaklýk) / Hacim

*/
void subhead()
{
	int mol, heat, volume, T ;
	float result, R ;
	R= 8.31;
	
	printf("Please enter how many mol atoms: \n");
	scanf_s("%d", &mol);
	printf("Please enter how much celsius: \n");
	scanf_s("%d", &heat);
	printf("Please enter how many volume: \n");
	scanf_s("%d", &volume);
	T = heat + 273;

	result = (mol * T * R) / volume;

	printf("The gas pressure is: %f\n", result);
}

int main() 
{
	subhead();
	return 0;
}