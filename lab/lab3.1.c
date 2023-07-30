# include <stdio.h>
# include <stdlib.h>

/*  Girilen sayiya kadar olan sayilari ucer ucer yazdiran C kodunu yaziniz.
*/

int main(){
    int sayi, ucerli;
    printf("Bir sayi giriniz: \n");
    scanf("%d",&sayi);

    for(int j=0; j<(sayi/3); j++){
           ucerli += 3;
           printf("%d\n",ucerli);  
        }

    return 0;
}