#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int arr[5]={3,6,9,12,15};  //arr isimli bir tam sayi dizisi tanimlanir.
    printf("Lutfen bir tam sayi giriniz="); //Kullanicidan bir tam sayi degeri girmesi istenir.
    scanf("%d",&i);
    int sayac=0;
    for(j=0; j<5; j++){
        if(i==arr[j]){  //Kullanicidan alinan tam sayi degeri dizide var mi kontrol edilir.
            printf("%d",j); //Kullanicidan alinan tam sayinin dizideki indisi ekrana yazdirilir.
            sayac++; //Kullanicidan alinan deger dizide varsa sayac 1 artirilir.
        }
    }
    if(sayac==0){ //Kullanicidan alinan deger dizide yoksa yani sayac=0 ise -1 yazdirilir.
        printf("-1");
    }
    return 0;
}
