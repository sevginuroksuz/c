# include <stdio.h>
# include <stdlib.h>

/*Klavyeden girilen bir sayının tek mi çift mi olduğunu tespit eden c programını yazınız. Sonuç da ekrana "Sayı tektir." veya "Sayı çifttir." şeklinde yazdırılacaktır.*/

int main ()
{
    int a;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);

    if(a%2==0)
       printf("Sayi çifttir.");
    else
       printf("Sayi tektir.");









    return 0;
}