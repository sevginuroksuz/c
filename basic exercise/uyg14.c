# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/*Bilgisayarın 0-99 arasında rastgele bir sayı ürettiği, kullanıcıdan bir sayı alındığı ve aynı zamanda bu iki sayının aynı olup olmadığı kontrol edildiği bir sayı tahmin oyununun C kodunu yazınız. Bu oyunda bilgisayar kullanıcıya doğru sayıyı bulamadığında "Bilemedin yukarı çık." ve "bilemedin aşağı in." şeklinde uyarılar vermelidir. */

int main()
{
    int sayi1, sayi2;

    srand(time(0));
    sayi1=rand()%100;

    while(1)
    {
        printf("0-99 arasinda bir sayi giriniz: \n");
        scanf("%d",&sayi2);
        if(sayi1==sayi2)
        {
          printf("Tebrikler sayiyi buldunuz!\n");
          break;
        }
      
        else if(sayi1<sayi2)
          printf("Cok söyledin asagi in!\n");
        
        else
          printf("Az soyledin yukari cik!\n");
    }

    return 0;
}