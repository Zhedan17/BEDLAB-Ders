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
	/* &, |, ve ^ iþaretleri matematikteki mantýkla ayný çalýþýr
	deðerin 8 bitlik versiyonlarýný alt alta yazar ve 0/1 þeklinde 
	3. bir deðer oluþturulur. Kullaným amaçlarý genellikle istenilen
	þeylerin varlýðýný kontrol etmek.
	*/
	NumberOne <<= 2;
	printf("NumberOne's bits are slide two unit left: %d\n", NumberOne);
	printf("New NumberOne is: %d\n", NumberOne);
	NumberOne >>= 2;
	printf("NumberOne's bits are slide two unit right: %d\n", NumberOne);
	printf("The last version of NumberOne is: %d\n", NumberOne);
	/* >> veya << iþaretleri deðerlerin bitlerini saða veya sola, eþittir iþaretinin 
	saðýna yazýldýðý kadar kaydýrýr.
	*/
}

int main()
{
	subhead();
	return 0;
}

