#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int numbers[] = { 1,2,3,4,5,6,7,8,9 };
	printf("%d", sizeof(numbers[0]));//Birinin bellekte kapladigi alan 4 ve toplam kaplanan alan 36 ise 
									 //36'nin 4'e bolunmesi toplam uye sayisini verir.


	
	printf("\n\n%d tane eleman bulunmakta\n\n", sizeof(numbers)/ sizeof(numbers[0]));

	const int numbers2[9] = { 1,2,3,4,5,6,7,8,9 };// Eger boyle yaparsak elemanlari disaridan degistiremeyiz.

	return 0;
}
