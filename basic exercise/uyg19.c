# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

int main()
{       int ilkSayi, ikinciSayi, kucukOlanSayi, N;
        bool sonuc = false;
       
       printf("N sayisini girin:");
       scanf("%d",&N);
        
    for(int k=1; k<=N; k++)
      for(int j=1; j<=N; j++)
    {
              ilkSayi=k;
              ikinciSayi=j;
        

        for (int i = 2; i <= j; i++) 
            if ((ilkSayi % i == 0 )&& (ikinciSayi % i == 0)) 
                sonuc = true;
            
        
         if (sonuc) 
            ;
           else 
            printf("%d ve %d sayilari aralarinda asaldir\n", ilkSayi, ikinciSayi);
            
    }
        



    return 0;
}