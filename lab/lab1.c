#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Hello\nWorld1\n");        // "\n" : Bir alt satira gecmeyi saglar.

    printf("Hello\tWorld2\n");       // "\t" : tab kadar kelimeler veya ifadeler arasinda bosluk birakmayi saglar.

    printf("Hello\rWorld3\n");      // "\r" : Imleci satır basina alir.

    printf("Hello\b\bWorld4\n");   // "\b" : Bir karakter kadar imleci geriye alır.

    printf("alarm\a\n");               //  "\a" : Alarm sesi cikarir. 

    printf("Hello\\World6\n");    // "\\" : \ sembolunu ifade edebilmek icin kacis karakteri dedigimiz \ sembolunu 2 defa kullanmamiz gerekir.

    printf("Hello\"World7\n");    // "\"" : " sembolunu ifade edebilmek icin kacis karakteri dedigimiz \ sembolunu daha sonra da istedigimiz sembolu  kullanmamiz gerekir.


    return 0;
    
}
