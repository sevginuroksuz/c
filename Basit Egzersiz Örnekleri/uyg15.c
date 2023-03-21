# include <stdio.h>
# include <stdlib.h>

// continue kullanımı
// 1'den 50'ye kadar olan sayıları 10'un katları hariç ekrana yazdıran C kodu

int main()
{
    for(int i=1; i<51; i++)  
    {
        if(i%10==0)
           continue;
        
        printf("%d\n",i);

    }

    return 0;
}