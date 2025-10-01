#include <stdio.h>
#include <stdlib.h>

signed int tamsayi1 =0;
signed int tamsayi2 =0;

int main()
{
    printf("Birinci Tamsayi Degerini Giriniz:\n");
    scanf("%d", &tamsayi1);
    printf("Ýkinci Tamsayi Degerini Giriniz:\n");
    scanf("%d", &tamsayi2);

    printf("Birinci sayinin ve ikinci sayinin Toplami: %d\n",tamsayi1+tamsayi2);
    printf("Birinci sayinin ve ikinci sayinin Farki: %d\n",tamsayi1-tamsayi2);
    printf("Birinci sayinin ve ikinci sayinin Carpimi: %d\n",tamsayi1*tamsayi2);
    if (tamsayi2 == 0){
        printf("Bir sayi, sifira bolunemez.");
    }
    else{
    printf("Birinci sayinin ve ikinci sayinin Bolumu: %.4f\n",(float)tamsayi1/tamsayi2);
    }
}
