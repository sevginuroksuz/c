# include <stdio.h>
# include <stdlib.h>

/*Kullanıcı klavyeden bir karakter girecektir. Girilen karakter bir harf mi değil mi onu algılayan C kodunu yazınız.  */

int main()
{
    char karakter;

    printf("Bir karakter giriniz: \n");
    scanf("%c",&karakter);

    if((karakter>='a' && karakter<='z') || (karakter>='A' && karakter<='Z'))
        printf("Bir harf girildi. ");

   else 
        printf("Bir harf girilmedi.");

    return 0;
}