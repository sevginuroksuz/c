# include <stdio.h>
# include <stdlib.h>

/* Kullanicidan alinan ay bilgisi uzerinden o ayin hangi mevsimde oldugunu ekrarna yazdiran algoritmanin kodunu yaziniz. Ekran ciktisi "Kis mevsimi" seklinde olacak ve program sonlanacaktir.

*/


int main(){

    int ay;
    printf("****************************************************************\nYilin kacinci ayi?:\n");
    scanf("%d",&ay);
    printf("****************************************************************\n");
    switch (ay)
    {
    case 12:
    case 1:
    case 2:
        printf("Kis mevsimi");
        break;
        case 3:
        case 4:
        case 5:
        printf("Bahar mevsimi");
        break;
        case 6:
        case 7:
        case 8:
        printf("Yaz mevsimi");
        break;
        case 9:
        case 10:
        case 11:
        printf("Sonbahar mevsimi");
        break;
    
    default:
    printf("Tekrar deneyin");

        break;
    }




















    return 0;
}