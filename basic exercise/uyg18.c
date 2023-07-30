# include <stdio.h>
# include <stdlib.h>

/*Girilen sayiya kadar olan sayilari uclu sıralar halinde yazdiran C kodunu yaziniz.

     1    2    3
     4    5    6     kod cktisi bu sekilde olmalidir. Ve sayilar arasinda tab kadar bosluk birakiniz.
     ...


*/

int main(){
    int sayi, sayac=0;
    printf("Bir sayi giriniz: \n");
    scanf("%d",&sayi);

    for(int j=1; j<=sayi; j++){
           printf("%d\t",j);
           sayac++;
           if(sayac%3==0)
              printf("\n");
        }

    return 0;
}