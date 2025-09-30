#include <stdio.h>
#include <stdlib.h>

int sayi1;
int sayi2;
int sayi3;
int x;
int y;
int z;

int main()
{
    printf("Birinci sayiyi giriniz:\n");
    scanf("%d",&sayi1);
    printf("Ikinci sayiyi giriniz:\n");
    scanf("%d",&sayi2);
    printf("Ucuncu sayiyi giriniz:\n");
    scanf("%d",&sayi3);

    if (sayi1 > sayi2){
        if (sayi3 > sayi1){
            x = sayi3;
            y = sayi1;
            z = sayi2;
            }
        else if (sayi3 > sayi2){
            x = sayi1;
            y = sayi3;
            z = sayi2;
            }
        else {
            x = sayi1;
            y = sayi2;
            z = sayi3;
            }
    }
    else {
        if (sayi3 > sayi2){
            x = sayi3;
            y = sayi2;
            z = sayi1;
            }
        else if (sayi3 > sayi1){
            x = sayi2;
            y = sayi3;
            z = sayi1;
            }
        else {
            x = sayi2;
            y = sayi1;
            z = sayi3;
            }
    }

    printf("Sayilarin siralamasi:\n");
    printf("%d < %d < %d",z,y,x);
}

