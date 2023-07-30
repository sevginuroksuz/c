# include <stdio.h>
# include <stdlib.h>

/*1'den 20' ye kadar olan sayilari 3'un kati olanlar haric ekrana yazdiriniz. Sayialrin arasinda tab kadar bosluk birakiniz ve her satirda sadece 5 sayi olacak sekilde yazdiriniz.*/

int main(){
    int sayac=1;
    for(int i=1; i<=20; i++){

        if(i%3==0)
          continue;
        
        else{
             if(sayac%5==0){
              printf("\n");
        }
             else
              printf("%d\t",i);
              sayac++;
        }             
    }
}