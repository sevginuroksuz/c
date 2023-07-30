# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>


void argyaz(int arg_sayac,...)
{
    int i, j;
    va_list ap;
    va_start(ap,arg_sayac);
    


    for(i=1; i<=arg_sayac; i++ )
      {
         do
         {
            j=va_arg(ap,int);
            printf("%d ",j);
           
         } while (j==-1 && arg_sayac==i);
         
        
       //if()
          
      }
          va_end(ap);
          putchar('\n');

      
    
       
}

int main()
{
   int sayi_adedi=5;
   argyaz(sayi_adedi,4,6,8,10,3,-1);
   



  return 0;
}