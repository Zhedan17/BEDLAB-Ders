#include <stdio.h>

void subhead()
{
	int x, y, z;
	x = 5;
	y = 7;
	z = 7;
	printf("True=1 and False=0 \n");
	printf("Is x and y equal?:%d\n", x == y);
	printf("Isnt x and y equal? %d\n", x != y);
	printf("X is bigger than y?: %d\n", x>y);
	printf("Y is bigger than x?: %d\n", x < y);
	printf("X is bigger than y or equal to?: %d\n", x >= y);
	printf("Y is bigger than z or equal to?: %d\n", z <= y);

}

int main() 
{
	subhead();
	return 0;
}