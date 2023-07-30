# include <stdio.h>
# include <stdlib.h>

// Kullanicidan alinan iki float sayi kullanilarak toplama, carpma, bolme ve cikarma islemleri yapan program


int main(){
    const float x;
    const float y;

    float toplama, cikarma, carpma, bolme;
     
    printf("Birinci sayiyi giriniz: \n");
    scanf("%f",&x);
    
    printf("Ikinci sayiyi giriniz: \n");
    scanf("%f",&y);
    
    
    toplama = x+y;
    printf("x+y: %f \n",toplama);

    cikarma= x-y;
    printf("x-y: %f\n", cikarma);

    carpma= x*y;
    printf("x*y: %f \n",carpma);

    bolme=x/y;
    printf("x/y: %f\n",bolme);


    return 0;
}