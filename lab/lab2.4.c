# include <stdio.h>
# include <stdlib.h>

/*
   Dort islemi yapan hesap makinesi programini yaziniz.
*/

int main(){

    float sayi1, sayi2, sonuc;
    int islem;

    printf("**********************************************************\n1-TOPLAMA\n2-CİKARMA\n3-CARPMA\n4-BOLME\n");
    printf("Islem no giriniz: \n",&islem);
    scanf("%d",&islem);

    printf("Birinci sayiyi giriniz:\n",&sayi1);
    scanf("%f", &sayi1);

    printf("Ikinci sayiyi girini:.\n",&sayi2);
    scanf("%f",&sayi2);

    switch (islem)
    {
    case 1:
        sonuc = sayi1+sayi2;
        printf("%.2f + %.2f = %.2f",sayi1,sayi2,sonuc);
        break;
        case 2:
        sonuc = sayi1-sayi2;
        printf("%.2f - %.2f = %.2f",sayi1,sayi2,sonuc);
        break;
        case 3:
        sonuc = sayi1*sayi2;
        printf("%.2f x %.2f = %.2f",sayi1,sayi2,sonuc);
        break;
        case 4:
        sonuc = sayi1/sayi2;
        printf("%.2f / %.2f = %.2f",sayi1,sayi2,sonuc);
        break;
    
    default:
            ;
        break;
    }










    return 0;
}