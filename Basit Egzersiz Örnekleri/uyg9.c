# include <stdio.h>
# include <stdlib.h>

/*Kullanıcıdan 1-12 arasında ayları temsil edecek şekilde (ocak 1. ay) bir tamsayı girmesi istenecek. Girilen ay bilgisine göre o ayın kaç gün olduğu ekrana yazdıran kodu yazınız.  ( switch case yapısı kullanılarak yapılacak)*/

int main()
{
    int ay, gun;
    printf("1-12 araliginda bir sayi giriniz: \n");
    scanf("%d",&ay);

    if(ay>=1 && ay<=12)
    {
       switch (ay)
       {

       case 2:
        gun=28;
        break;

       case 4:
       case 6:
       case 9:
       case 11:
        gun=30;
        break;

        default:
          gun=31;
          break;
       }
       printf("Sectiginiz ay %d gundur.",gun);
    
    }else
      printf("yanlis girdi!");



    return 0;
}