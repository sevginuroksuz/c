# include <stdio.h>
# include <stdlib.h>

/*Cumlede karakter arama kodu*/

int main()
{
    char cumle[101];
    char aranan;
    int poz[100], sayac=0;

    printf("Cumleyi giriniz: \n");
    gets(cumle);

    printf("Aranacak karakteri giriniz: \n");
    scanf("%c",&aranan);

    for(int i=0; cumle[i] != '\0'; i++)
        if(aranan==cumle[i])
           poz[sayac++]=i;
        
        printf("Cumlede %c karakteri %d kez bulundu.\n",aranan,sayac);
        for(int i=0; i<sayac ;i++)
               printf("cumledeki indis konumu: %d\n", poz[i]);
  

    return 0;
}