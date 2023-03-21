# include <stdio.h>
# include <stdlib.h>

// Ternary ve if-else ifadelerinin birbirine donusumu

int main ()
{
    int a, x;

    printf("Bir tam sayi girin: \n");
    scanf("%d",&a);

    // if else

    if(a>1)
        x=1;
    
    else if(a==1)
        x=2;
    else 
       x=3;

    // ternary

    x = (a>1) ? 1 : (a==1) ? 2 : 3;








    return 0;
}