#include <stdio.h>
#include <string.h>

typedef struct ogrenci_data
{
    int No;
    char Ad[51];
    int Not;

} Ogrenci;

Ogrenci* ogrenciler;
int ogrenci_sayisi;

void DosyaYaz(){
 
 printf("OGRENCI BILGILERINI GIRINIZ: \n----------------------------------------\n");
 for(int i=0; i<ogrenci_sayisi; i++)
 {
    printf("%d. OGRENCI NO: ", i+1);
    scanf("%d",&ogrenciler[i].No);

    printf("%d. OGRENCI AD: ", i+1);
    scanf("%s",&ogrenciler[i].Ad);

    printf("%d. OGRENCI NOT: ", i+1);
    scanf("%d",&ogrenciler[i].Not);
    printf("\n");
 }
    FILE* fptr=fopen("ogrenci.txt","w");
    if(fptr==NULL)
        printf("ogrenci.txt dosyasi acilamadi!\n");
    else
    {
        for(int i=0; i<=ogrenci_sayisi; i++)
        {  
                fprintf(fptr,"%d\t%s\t%d\n",ogrenciler[i].No,ogrenciler[i].Ad,ogrenciler[i].Not);
        }
        fclose(fptr);   
        printf("OGRENCI BILGILERI KAYDEDILDI");
    }   
}


void DosyaOku()
{
    printf("\n\nOGRENCI BILGILERI DOSYADAN OKUNUYOR..\n\n");
    printf("\n\nOGRENCI BILGILERI\n--------------------------------------\n\n");

    int numara,notu;
    char ismi[51];

    FILE *fptr;
    fptr = fopen("ogrenci.txt","r");
   if(fptr==NULL)
 
    printf("ogrenci.txt dosyasi acilamadi! \n");

   else
   {
    
    for(int i=0; i<ogrenci_sayisi; i++)
    {
      fscanf(fptr,"%d\t%s\t%d\n",&numara,ismi,&notu);
      printf("NO: %d\nAD: %s\nNOT: %d\n\n",numara,ismi,notu);
    }
    fclose(fptr);
   }
}

int main()
{
    printf("Kac tane ogrenci: \n");
    scanf("%d",&ogrenci_sayisi);
    ogrenciler=(Ogrenci*)malloc(ogrenci_sayisi*sizeof(Ogrenci));
    DosyaYaz();
    DosyaOku();

    return 0;
}





  