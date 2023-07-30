# include <stdio.h>
# include <stdlib.h>
/*Sadece rakamlardan olusan sifre isimli degisken olusturunuz. Sifre 123 olacak sekilde kaydediniz. Kullanicidan alinacak olan sifreyle karsilastiriniz. Sifre dogruysa donguyu bitiriniz, yanlissa tekrar sifre aliniz. Donguyu do while ile kurunuz.*/

int main(){

    int sifre=123;
    int gsifre;

    do
    {
       printf("Sifrenizi giriniz: \n");
       scanf("%d",&gsifre);
       
       if(sifre==gsifre)
            printf("Basariyla giris yaptiniz!\n");
        else
           printf("Yanlis sifre girdiniz tekrar deneyin:\n");
           scanf("%d",&gsifre);

    } while (sifre!=gsifre);
            printf("Basariyla giris yaptiniz!\n");


    return 0;
}

