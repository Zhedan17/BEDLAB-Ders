#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int size, i, big=0, small=100, bigIndex, smallIndex;
	int notes[100], studentNo[100];
	printf("Enter class size.\n");
	scanf_s("%d", &size );
	for(i=0;i<size;i++)
	{
		printf("Student No and Note:");
		scanf_s("%d%d", &studentNo[i], &notes[i] );
	}

	for (i = 0; i < size; i++)
	{
		if(notes[i]>big)
		{
			big = notes[i];
			bigIndex = i;

	 	}
		if(notes[i]<small)
		{
			small = notes[i];
			smallIndex = i;
		}
	}

	printf("\n %d no'lu ogrenci en yuksek notu almistir ve notu %d", studentNo[bigIndex], big);
	printf("\n %d no'lu ogrenci en dusuk notu almistir ve notu %d", studentNo[smallIndex], small);

	return 0;
}