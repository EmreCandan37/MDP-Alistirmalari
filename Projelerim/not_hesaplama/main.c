#include <stdio.h>
#include <stdlib.h>

float not1 = 0.0;
float not2 = 0.0;
float not3 = 0.0;
float not4 = 0.0;

int main()
{
        for (int x = 1; x < 6 ; x++){
            printf("%d. Ogrenci icin 1. Notu Giriniz: \n",x);
            scanf("%f", &not1);
            printf("2. Notu Giriniz: \n");
            scanf("%f", &not2);
            printf("3. Notu Giriniz: \n");
            scanf("%f", &not3);
            printf("4. Notu Giriniz: \n");
            scanf("%f", &not4);

            if (not1 < 101 && not2 < 101 && not3 < 101 && not4 < 101 ){

            float ortalama = (not1+not2+not3+not4)/4;
            if (ortalama < 50){
                printf("Ogrenci Kaldi. Ortalama %f\n",ortalama);
                              }
            else
                printf("Ogrenci Gecti. Ortalama %f\n",ortalama);
                                                                      }
            else{
                printf("Gecersiz not girdiniz. Lutfen tekrar giriniz.\n");
                x--;
                }
                                    }



}
