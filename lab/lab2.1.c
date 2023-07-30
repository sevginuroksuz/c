# include <stdio.h>
# include <stdlib.h>

/* Kullanicidan o gun ayin kacinci gunu oldugu ve kac gun sonrasini istedigi bilgisi alinir.
   Daha sonrasinda "45 gun sonrasi persembe" seklinde cikti verir ve program sonlanir. 

*/



int main(){
    int bugun, gelecek, gelecekGun;
    printf("Bugun hangi gun?\n");
    scanf("%d",&bugun);
    printf("Kac gun sonrasini merak ediyorsunuz?\n",gelecek);
    scanf("%d",&gelecek);
    gelecekGun=bugun+gelecek;
    gelecekGun=gelecekGun%7;

    switch (gelecekGun)
    {
        case 1:
            printf("%d gun sonrasi pazartesi",gelecek);
                break;
        case 2:
             printf("%d gun sonrasi sali",gelecek);
                 break;

        case 3:
             printf("%d gun sonrasi carsamba",gelecek);
                 break;
        case 4:
             printf("%d gun sonrasi persembe",gelecek);
                 break;
        case 5:
             printf("%d gun sonrasi cuma",gelecek);
                 break;
        case 6:
             printf("%d gun sonrasi cumartesi",gelecek);
                 break;
        case 7:
             printf("%d gun sonrasi pazar", gelecek);
                 break;
        

         default:
            ;
            break;
    }











    return 0;
}