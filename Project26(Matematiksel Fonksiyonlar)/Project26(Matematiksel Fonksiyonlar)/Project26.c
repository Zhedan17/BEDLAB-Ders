#include <stdio.h>
#include <math.h>

void subhead()
{
	double x=216, result;
	result = cbrt(x);
	printf("cube root of 216 = %.2f", result);
}
//cbrt() fonksiyonu verilen fonksiyonun kup kokunu almamizi saglar.

//ceil ve floor komutlari sirasiyla tavan ve taban demektir. Ust ve alt siraya yuvarlar.


void subhead2()
{
	double x = -7.66, result;
	result = fabs(x);
	printf("Absolute of -7.66 = %.2f", result);
}
//fabs verilen sayinin mutlak degerini almamizi saglar.


int main()
{
	subhead();
	printf("\n\n");
	subhead2();
	return 0;
}