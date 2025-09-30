#include <stdio.h>
#include <stdlib.h>

char harf;

int main()
{
    printf("Bir harf giriniz:\n");
    scanf("%c", &harf);

    if (harf == 'a')
        printf("Harfiniz ünlüdür.");
    else if (harf == 'e')
        printf("Harfiniz ünlüdür.");
    else if (harf == 'i')
        printf("Harfiniz ünlüdür.");
    else if (harf == 'o')
        printf("Harfiniz ünlüdür.");
    else if (harf == 'A')
        printf("Harfiniz ünlüdür.");
    else if (harf == 'E')
        printf("Harfiniz ünlüdür.");
    else if (harf == 'I')
        printf("Harfiniz ünlüdür.");
    else if (harf == 'O')
        printf("Harfiniz ünlüdür.");
    else
        printf("Harfiniz ünsüzdür.");
}
