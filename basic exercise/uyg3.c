# include <stdio.h>
# include <stdlib.h>

/*Klavyeden girilen 2 gerçel sayının
• Toplamını
• Çıkartılmasını
• Çarpımını
• Bölümünü
bulup yazdıran C programını yazınız.
Not-1: Her aritmetik işlem için birer değişken tanımlayınız ve girilen iki
sayının aritmetik işlemini gerçekleştirip, bu değişkene atayınız.
Not-2: Toplama ve çıkartma işleminin sonucu 2 ondalıklı, çarpma
işleminin sonucu 4 ondalıklı ve bölme işleminin sonucu 6 ondalıklı
olmalıdır.*/

int main()
{
    float a, b, toplam, fark, carpim, bolum;

    printf("Ilk sayiyiy gir: \n");
    scanf("%f",&a);
   
    printf("Ikinci sayiyiy gir: \n");
    scanf("%f",&b);

    toplam=a+b;
    printf("Toplam: %.2f\n",toplam);

    fark=a-b;
    printf("Fark: %.2f\n",fark);

    carpim=a*b;
    printf("Carpim: %.4f\n",carpim);

    bolum=a/b;
    printf("Bolum: %.6f",bolum);


    return 0;
}