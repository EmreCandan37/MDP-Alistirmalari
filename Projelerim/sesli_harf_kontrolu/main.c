#include <stdio.h>
#include <stdlib.h>

char harf;

int main()
{
    printf("Bir harf giriniz:\n");
    scanf("%c", &harf);

    if (harf == 'a')
        printf("Harfiniz �nl�d�r.");
    else if (harf == 'e')
        printf("Harfiniz �nl�d�r.");
    else if (harf == 'i')
        printf("Harfiniz �nl�d�r.");
    else if (harf == 'o')
        printf("Harfiniz �nl�d�r.");
    else if (harf == 'A')
        printf("Harfiniz �nl�d�r.");
    else if (harf == 'E')
        printf("Harfiniz �nl�d�r.");
    else if (harf == 'I')
        printf("Harfiniz �nl�d�r.");
    else if (harf == 'O')
        printf("Harfiniz �nl�d�r.");
    else
        printf("Harfiniz �ns�zd�r.");
}
