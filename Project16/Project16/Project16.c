#include <stdio.h>

void main()
{
	/*int i;
	for (i = 0; i < 10; i++) {
		if (i == 7) {
			break;
		}
		printf("%d\n", i);
	}*/

	/*int i;
	i = 0;

	while (i <= 10) {

		if (i==8) {
			break;
		}
		printf("%d\n", i);
		i++;
	}*/

	/*int i;
	for (i = 0; i <= 10; i++) {
		if (i == 7) {
			continue;
		}
		printf("%d\n", i);
	}*/

	int i;
	i = 0;

	while (i <= 10) {

		if (i == 8) {
			i++;	// continue kullandýðýmýzda alttaki i++ atlandýðý için komut çöker.
			continue;
		}
		printf("%d\n", i);
		i++;
	}
}