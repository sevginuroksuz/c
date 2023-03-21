# include <stdio.h>
# include <stdlib.h>


//printf () Tip Belirleyecileri

int main(){
    printf("Karakterler: %c %c\n",'a',65);
    printf("Decimal sayilar: %d\n",1977);
    printf("Oncesinde bosluk: %10d\n",1977);
    printf("Oncesinde 0 yazmak: %010d\n",1977);
    printf("Float sayilar: %.2f\n",3.1416);
    printf("%s\n","Bir String");

    return 0;
}