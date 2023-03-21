# include <stdio.h>
# include <stdlib.h>


/*Aşağıdaki işlemleri teker teker gerçekleştiriniz ve her işlemden
sonra değişlenlerin değerini ekrana yazdırınız.
a = 5;
a değerini YAZ
b = a++;
a ve b değerlerini YAZ
c = ++a;
a, b ve c değerlerini YAZ*/


int main()
{
    int a, b, c;
    a=5;
    printf("a: %d\n",a);

    b=a++;
    printf("a: %d\n",a);
    printf("b: %d\n",b);

    c=++a;
    printf("a: %d\n",a);
    printf("b: %d\n",b);
    printf("c: %d\n",c);




    return 0;
}