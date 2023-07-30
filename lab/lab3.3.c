# include <stdio.h>
# include <stdlib.h>

/*Yildiz karakterleriyle dik ucgen seklini olusturan C kodunu yaziniz.*/

int main(){
    int sayi=10,k,i;
    
    for(i=0; i<=sayi;i++){

        for(int j=0; j<i; j++)
           printf("*",j);
           printf("\n");

    }

    return 0;
}