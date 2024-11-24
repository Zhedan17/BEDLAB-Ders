#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void anamenu();

void diskriminant()
{
    int a, b, c;
    printf("Lutfen bilinmeyenin onundeki katsayilari giriniz. (Sirasi ile giriniz.)\n");
    scanf_s("%d %d %d", &a, &b, &c);

    int result = (b * b) - (4 * a * c);

    if (result > 0)
    {
        double kok1, kok2;
        kok1 = (-b + sqrt(result)) / (2.0 * a);
        kok2 = (-b - sqrt(result)) / (2.0 * a);

        printf("Denkleminizin 2 koku bulunmaktadir. Bunlar: %.2f, %.2f.\n", kok1, kok2);
    }
    else if (result == 0)
    {
        double kok3;
        kok3 = -b / (2.0 * a);

        printf("Denkleminizin 1 koku bulunmaktadir. Bunlar: %.2f.\n", kok3);
    }
    else
    {
        printf("Denkleminizin reel koku bulunmamaktadir.\n");
    }

    printf("Diskriminant: %d\n", result);
    printf("\n\n");
    anamenu();
}

void tepenoktasi()
{
    int a, b, c;
    printf("Lutfen bilinmeyenin onundeki katsayilari giriniz. (Sirasi ile giriniz.)\n");
    scanf_s("%d %d %d", &a, &b, &c);

    int result = (b * b) - (4 * a * c);

    int tepnok;
    double sonuc;
    tepnok = (-b) / (2 * a);
    sonuc = result / (4 * a);

    printf("Tepe noktasinin koordinatlari: T(%d, %.2f)\n", tepnok, sonuc);
    printf("\n\n");
    anamenu();
}

void anamenu()
{
    int i;
    printf("Yapmak istediginiz islemi giriniz;\n0: Kokleri bul.\n1: Tepe noktasi ve koordinatlari.\n2: Uygulamayi kapat.\n");
    scanf_s("%d", &i);
    switch (i)
    {
    case 0:
        diskriminant();
        break;
    case 1:
        tepenoktasi();
        break;
    case 2:
        return 0;
    default:
        printf("Lutfen verilen secenekler arasidnan secim yapýnýz\n");
        break;
    }

}
int main()
{
    
    anamenu();
	return 0;
}


