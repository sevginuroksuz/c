# include <stdio.h>
# include <stdlib.h>
# include <windows.h>

/*Program çalıstırıldığında 00:00'dan başlayıp dakika ve saniye şeklinde olacak şekilde zaman sayacı kodunu yazınız.*/

int main()
{
   for(int i=0; i<60; i++)
       for(int j=0; j<60; j++)
       {
        printf("%02d:%02d\r",i,j);
        Sleep(1000);

       }

    return 0;
}