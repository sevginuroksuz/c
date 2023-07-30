# include <stdio.h>
# include <stdlib.h>

/*Klavyeden girilecek aşağıdaki sınav ve ödevlere göre Ders notu
hesaplanacaktır:
• Ödev: %9 (3 tane)
• Quiz: %21 (3 tane)
• Ara Sınav: %30 (2 tane yazılı sınav)
• Final: %40 (1 tane genel yazılı sınav)
Not1: Toplam 9 tane giriş yapılacaktır. Girişler Gerçel sayı
olacaktır.
Not2: Ders notu 2 ondalıklı olarak gösterilecektir.*/

int main()
{
    double odev1, odev2, odev3, quiz1, quiz2, quiz3, ara_sinav1, ara_sinav2, final, ders_notu;

    printf("Odev1 notunu giriniz: \n");
    scanf("%lf",&odev1);

    printf("Odev2 notunu giriniz: \n");
    scanf("%lf",&odev2);    

    printf("Odev3 notunu giriniz: \n");
    scanf("%lf",&odev3);
    
    printf("Quiz1 notunu giriniz: \n");
    scanf("%lf",&quiz1);

    printf("Quiz2 notunu giriniz: \n");
    scanf("%lf",&quiz2);

    printf("Quiz3 notunu giriniz: \n");
    scanf("%lf",&quiz3);

    printf("Arasinav1 notunu giriniz: \n");
    scanf("%lf",&ara_sinav1);

    printf("Arasinav2 notunu giriniz: \n");
    scanf("%lf",&ara_sinav2);

    printf("Final notunu giriniz: \n");
    scanf("%lf",&final);

    ders_notu= odev1*0.03 + odev2*0.03 + odev3*0.03 + quiz1*0.07 + quiz2*0.07 + quiz3*0.07 + ara_sinav1*0.15 + ara_sinav2*0.15 + final*0.4;

    printf("Ders notu: %.2lf",ders_notu);


    return 0;
}