#include <stdio.h>
#include <string.h>

void subheading2()
{
   /*
    char str[50] ;
    char str2[50] ;
    printf("Isim Gir:") ;
    scanf("%s", str) ;
    printf("Soyisim Gir:") ;
    scanf("%s", str2) ;
    printf("Your full name is %s %s\n",str,str2) ;
    */
    /* Dairenin alan�n� ve �everesinu bulan program haz�rlayaca��
    1- ihtiyac�m�z olan variables bul ve tan�mla
    2- Variables t�r�n� bul
    3- form�l� tan�mla
    4- Kullan�c�dan verileri al
    5- ��lem yap
    6- ��kt� ver

    */
    float r, circumference, area;
    const float PI=3.1415 ;
    // const constant demek bu ise sabit demek yani ileride pi nin de�i�tirilmesini engellemi� olduk
    printf("Dairenin yaricapini giriniz: %f");
    scanf("%f", &r);
    circumference=2*PI*r;
    area= PI*r*r;
    printf("Dairenin cevresi: %f\n", circumference);
    printf("Dairenin alani: %f\n", area);

}

int main()
{
    subheading2() ;
    return 0 ;
}
