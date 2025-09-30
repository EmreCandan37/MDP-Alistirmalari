#include <stdio.h>
#include <stdlib.h>

signed int sayi = 0;

int main()
{
    printf("Bir sayi giriniz:\n");
    scanf("%d", &sayi);

    if (sayi < 0)
        printf("Negatif");
    else if (sayi > 0)
        printf("Pozitif");
    else
        printf("Sifir");
}
