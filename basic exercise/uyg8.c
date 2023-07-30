# include <stdio.h>
# include <stdlib.h>

/*Kullanıcıdan 1-10 arasında bir tamsayı alınır. Bu şarta uymuyorsa uyarı verip program sonlandırılır. Aksi takdirde eğer şarta uyuyorsa o zaman girilen sayı asal mı değil mi bunun switch case yapısıyla kontrol edildiği kodu yazınız.*/


int main()
{
    int sayi;
    printf("1-10 arasinda bir sayi girin: \n");
    scanf("%d",&sayi);

    if(sayi>=1 && sayi<=10)
        switch(sayi){

            case 2:
            case 3:
            case 5:
            case 7:
                printf("Sayi asal değil.");
                break;
                
            default:
              printf("Sayi asal değil.");
               break;

        }
    










    return 0;
}