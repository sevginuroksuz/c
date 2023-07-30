# include <stdio.h>
# include <stdlib.h>

/*  Vize %30, 
    Final %40, 
    Quiz1 %5,
    Quiz2 %5, 
    Proje1 %10, 
    Proje2 %10 notlari verilen yuzdelere gore hesaplandiginda ogrencinin ortalamasi 60'a buyuk ve esitse "Dersten gectiniz" degilse "Dersten kaldiniz" seklinde cikti veren kodu yaziniz.

    Not: Sinav notlari sirasiyla kullanicidan alinacaktir.
    Not: Not ortalamasi float bir deger olup 12.23 seklinde not ciktisi olacaktir.
    
*/

int main(){

    float Vize, Quiz1, Quiz2, Proje1, Proje2, Final, NotOrt;

    printf("Vize notunu Giriniz: \n");
    scanf("%f",&Vize);
    printf("Quiz1 notunu Giriniz: \n");
    scanf("%f",&Quiz1);
    printf("Quiz2 notunu Giriniz: \n");
    scanf("%f",&Quiz2);
    printf("Proje1 notunu Giriniz: \n");
    scanf("%f",&Proje1);
    printf("Proje2 notunu Giriniz: \n");
    scanf("%f",&Proje2);
    printf("Final notunu Giriniz: \n");
    scanf("%f",&Final);

    NotOrt= (Vize*0.3) + (Quiz1*0.05) +(Quiz2*0.05) + (Proje1*0.1) + (Proje2*0.1) + (Final*0.4);

    if(NotOrt>=60)
        printf("Dersten gectiniz!");
     
    else
        printf("Dersten kaldiniz!");
    
    
    return 0;
}