# include <stdio.h>
# include <stdlib.h>
# define PI 3.14       // define anahtar kelimesi programdaki sabitleri tanimlamamizi saglar. Define ile tanimlanan degiskenler yazdigimiz kodda tekrar tanimlanip degistirilemez.

// Dairenin alanini hesaplayan kod

int main(){

    int r = 2;
    float alan = 2*PI*r*r; 

    printf("Dairenin alani: %f", alan);

   

    return 0;
}