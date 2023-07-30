# include <stdio.h>
# include <stdlib.h>

int main(){


    // int, float, string ve çesitli karakterlerin ASCI kodlariyla veya cesitli yontemlerle terminalde gosterim yollari

    int a=1, b=10, c=100;
    double d=1.0, e=10.0, f=100.0;
    char *str="Algoritma ve Programlama";
    
    
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    printf("%3d\n",a);
    printf("%3d\n",b);
    printf("%3d\n",c);

    printf("%.3d\n",a);
    printf("%.3d\n",b);
    printf("%.3d\n",c);

    printf("%f\n",d);
    printf("%f\n",e);
    printf("%f\n",f);

    printf("%.4f\n",d);
    printf("%.4f\n",e);
    printf("%.4f\n",f);

    printf("%7.3f\n",d);
    printf("%7.3f\n",e);
    printf("%7.3f\n",f);

    printf("*%s*\n",str);
    printf("*%.9s*\n",str);
    printf("*%-40s*\n",str);
    printf("*%20.9s*\n",str);

    printf("\n\n\n");
    printf("Karakterler: %c %c %c\n",'a',65,68);
    printf("Decimal sayilar: %d %ld\n", 1977, 650000L);
    printf("Oncesinde bosluk: %10d\n", 1977);
    printf("Oncesinde 0 yazmak: %010d\n", 1977);
    printf("Farkli gosterimler: %d %x %o %#x %#o\n", 100, 100, 100, 100, 100);
    printf("Float sayilar: %4.2f %+.0e %E\n", 3.1416, 3.1416, 3.1416);
    printf("%s\n","Bir String");
    

    return 0;
}