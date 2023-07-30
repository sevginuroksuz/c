# include <stdio.h>
# include <stdlib.h>

/*1-10 arasındaki tamsayıların küplerini hesaplayan programı yazınız. ( for while do-while dongulerini kullanarak) */

int main()
{
    int toplam;

    // for
    for(int i=1; i<11; i++)
       toplam += i*i*i;

       printf("Toplam1: %d\n",toplam);



    // while 
    int j=1;
    toplam=0;
    while (j<11)
    {
        toplam += j*j*j;
        j++;
    }
    

       printf("Toplam2: %d\n",toplam);

    // do while

    int k=1;
    toplam=0;
    do
    {
        toplam += k*k*k;
        k++;
        
    } while (k<11);

    printf("Toplam3: %d\n",toplam);
    






    return 0;
}