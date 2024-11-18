#include <stdio.h>
#include <stdlib.h>

void myMessage()
{
	printf("And now i know how can i use functions\n\n\n");
}

void NameList(char name[])
{
	printf("Hello my name is %s. ", name);
}

void NameList2(char name2[])
{
	printf("My friends name is %s,", name2);
}

void NameList3(char name3[])
{
	printf("%s,", name3);
}

void CurrentSituation(char name4[], int year)
{
	printf("%s, %d\n",name4, year);

}
int main()
{
	myMessage();
	NameList("Mehmet Efe");
	NameList2("Yagiz Efe");
	NameList3("Yigit");
	NameList3("Cetin");
	NameList3("Furkan");
	printf("\b.");
	printf("\n");

	CurrentSituation("Mehmet Efe", 18);
	CurrentSituation("Yagiz Efe", 18);
	CurrentSituation("Yigit", 18);
	CurrentSituation("Cetin", 17);
	CurrentSituation("Furkan", 18);




	return 0;
}