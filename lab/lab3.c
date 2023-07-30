# include <stdio.h>
# include <stdlib.h>

// Faktoriyel hesaplayan program

int main(){

    int sayi, factoriyel=1;
    printf("Faktoriyeli hesaplanacak sayiyi giriniz: \n");
    scanf("%d",&sayi);

    /*for ile*/

    for(int i=1;i<=sayi;i++)
        factoriyel*=i;
       printf("%d sayisinin faktoriyeli: %d\n",sayi,factoriyel);


       // while ile

       int k=sayi;
       factoriyel=1;
       while(k>0){
        factoriyel=factoriyel*k;
        k--;

       }
       printf("%d sayisinin faktoriyeli: %d\n",sayi,factoriyel);



    return 0;
}