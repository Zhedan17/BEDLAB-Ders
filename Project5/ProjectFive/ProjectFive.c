#include <stdio.h>
void subhead() 
{
	int NumberOne;
	NumberOne = 15;
	printf("NumberOne is: %d\n", NumberOne);
	NumberOne += 5;
	printf("NumberOne is changed: %d\n", NumberOne);
	NumberOne %= 3;
	printf("NumberOne is changed again: %d\n", NumberOne);
	printf("The last version before its change again %d\n", NumberOne);
	NumberOne &= 7;
	printf("NumberOne is changed: %d\n", NumberOne);
	printf("The last version of NumberOne: %d\n", NumberOne);
	NumberOne = 7;
	NumberOne |= 12;
	printf("Number one is just changed: %d\n", NumberOne);
	NumberOne ^= 8;
	printf("Number one is changed again: %d\n", NumberOne);
	/* &, |, ve ^ i�aretleri matematikteki mant�kla ayn� �al���r
	de�erin 8 bitlik versiyonlar�n� alt alta yazar ve 0/1 �eklinde 
	3. bir de�er olu�turulur. Kullan�m ama�lar� genellikle istenilen
	�eylerin varl���n� kontrol etmek.
	*/
	NumberOne <<= 2;
	printf("NumberOne's bits are slide two unit left: %d\n", NumberOne);
	printf("New NumberOne is: %d\n", NumberOne);
	NumberOne >>= 2;
	printf("NumberOne's bits are slide two unit right: %d\n", NumberOne);
	printf("The last version of NumberOne is: %d\n", NumberOne);
	/* >> veya << i�aretleri de�erlerin bitlerini sa�a veya sola, e�ittir i�aretinin 
	sa��na yaz�ld��� kadar kayd�r�r.
	*/
}

int main()
{
	subhead();
	return 0;
}

