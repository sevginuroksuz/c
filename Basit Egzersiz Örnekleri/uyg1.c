# include <stdio.h>
# include <stdlib.h>

/*Sabit girilen 2 tam sayının toplamını bulup yazdıran C programını yazınız.
   3 değişken kullanılacaktır.
   Değişkenlerin ilk değerleri 0 olarak atanacaktır.*/

int main()
{
    int a, b, c;

    a=b=c=0;
    printf("Birinci sayiyiy giriniz: \n");
    scanf("%d",&a);

    printf("Ikinci sayiyiy giriniz: \n");
    scanf("%d",&b);
    
    c=a+b;
    printf("Sonuc: %d",c);

    return 0;
}