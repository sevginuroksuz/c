# include <stdio.h>
# include <stdlib.h>

// Ternary, switch-case ve if-else ifadelerinin birbirine donusumu

int main()
{
    int c, b, d;

    printf("uc sayi girin: \n");
    scanf("%d %d", &c, &b, &d);

    // switch- case
    switch (c)
    {
    case 1:
    case 2:
        b=5;
        break;

    case 3:
           if(d>0)
              b=6;
            
            else 
               b=7;
         break;
    
    default:
        b=8;
        break;
    }

    // if-else

    if( c==1 || c==2)
        b=5;

    else if(c==3)
        if(d>0)
        b=6;
        else
          b=7;
    
    else
       b=8;


    // ternary

    b = (c==1 || c==2) ? 5 : (c==3) ? (b>0) ? 6 : 7 : 8;












    return 0;
}