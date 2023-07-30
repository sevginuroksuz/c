#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //arr isimli bir tam sayi dizisi tanimlanir.
    int arr[10]={1,1,3,3,3,5,7,9,9,9};
    int dizi[10]; //Tekrar eden karakterleri ayirmak icin dizi isimli tam sayi dizisi tanimlanir.

    //for dongusu kurularak dizinin ozgun elemanlari yazdirilir.
    for(int i=0;i<10;i++){
        int temp=0; //Kontrol islemi icin temp isimli gecici degisken tanimlanir.
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                temp++;
            }
        }
        if(temp==0){  // temp=0 ise dizi elemanlari ekrana yazdirilir.
        printf("%d ",arr[i]);
        }
    }

}


