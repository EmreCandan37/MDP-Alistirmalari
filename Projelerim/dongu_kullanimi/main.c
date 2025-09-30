#include <stdio.h>
#include <stdlib.h>

int sayi;

int main()
{
    printf("Bir sayi giriniz.\n");
    scanf("%d",&sayi);
    for (int i = 1; i <= sayi; i++)
        if (i > 50){
            break;
    }
        else if (i%3 == 0)
            continue;
        else
            printf("%d\n",i);
}
