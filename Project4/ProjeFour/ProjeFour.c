#include <stdio.h>

void subhead()
{
	int NumberOne;
	NumberOne = 17;
	printf("The first number was %d\n", NumberOne);

	//NumberOne++;
	//printf("And now we add plus one %d\n", NumberOne);
	/* Eger ki NumberOne ögesini print komutunun icerisinden arttýracak olursak
	bunun iki farklý yontemi var. Bunlar printf("blabla %d\n", ++NumberOne) ve 
	printf("blabla %d\n", NumberOne++) olacaktir. Peki bunlarin farki ne diye soracak
	olursak cift artinin sagda oldugu komutta bir ekle ama printf() komutunun ciktisini 
	aldiktan ekle demek. Bunu asagida gosterecegim.
	*/

	printf("++NumberOne: %d\n", ++NumberOne);
	printf("NumberOne++: %d\n", NumberOne++);
	printf("The final form of NumberOne: %d\n", NumberOne);
}

int main()
{

	subhead();
	return 0;

}