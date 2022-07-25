#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()

{
    srand(time(NULL));
    int zar1= (rand()%6) + 1;       /*1. zar atılır.*/
    int zar2= (rand()%6) + 1;       /*2. zar atılır.*/

    printf(" Iki zar atimi sonuclari: \n%3d\n%3d\n ", zar1, zar2);

    int ilk_atis= zar1 + zar2;        /*1. ve 2. zarda çıkan sonuçlar toplanır*/
    printf("Ilk zar atisi toplami sonucu: \n%3d \n", ilk_atis);

    if(ilk_atis == 11|| ilk_atis ==7)   /* ilk atış toplamları 7 veya 11 ise oyunu kaybeder.*/
        printf("***SANSINA KUS, BIR DAHA DENE***\n\n");

    else if(ilk_atis == 2|| ilk_atis ==3|| ilk_atis ==12)   /* ilk atış toplamları 2, 3 veya 12 ise oyunu kazanır.*/
        printf("***TEBRIKLER KAZANDINIZ***");

    else
    {
        int zar1= (rand()%6) + 1;  /* yukarıdaki 2 durum da değilse zarlar yeniden atılır.*/
        int zar2= (rand()%6) + 1;
        int puan_atisi= zar1 + zar2;   /*1. ve 2. zarda çıkan sonuçlar toplanır*/
        printf("puan_atisi sonucu: \n%3d \n", puan_atisi);
        if(ilk_atis == puan_atisi)            /* Puan atışındaki sonuç İlk atıştaki sonuçla eşleşiyorsa kazanır.*/
            printf("***TEBRIKLER KAZANDINIZ***");
        else
        {
            while(ilk_atis != puan_atisi)    /*Eğer eşleşme olmazsa olana kadar döngü devam eder.*/
        {

            int zar1= (rand()%6) + 1;       /*1. zar atılır.*/
            int zar2= (rand()%6) + 1;       /*2. zar atılır.*/
            int puan_atisi= zar1 + zar2;
            printf("Puan_atisi sonucu: \n%3d \n", puan_atisi);

            if(ilk_atis == puan_atisi)   /* Eşleşme gerçekleşince döngü biter.*/
            {
                printf("***Puan atisiniz ilk atisiniz ile eslesiyor***\n         _-_-_TEBRIKLER KAZANDINIZ_-_-_");
                break;
            }
        }
        }
    }

return(0);












}
