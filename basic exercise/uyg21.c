// Dosya kopyalama islemi


#include stdio.h
#include stdlib.h
 
 int main()
 {
    FILE* fptr_kaynak, fptr_hedef;
    fptr_kaynak = fopen("ogrenci.txt","r");
    if (fptr_kaynak == NULL)
       printf("ogrenciler_bilgi.txt dosyasi acilamadi!\n");
    else
    {
        fptr_hedef=fopen("ogrenci_bilgi_kopya.txt","w");
        if(fptr_hedef == NULL)
           printf("Kopya dosya olusturulamadi!\n");
        else
        {
            char temp;
            while(!feof(fptr_kaynak))
            {
                temp=fgetch(fptr_kaynak);
                ıf(temp!=EOF)
                  fputc(temp,fptr_hedef);
            }
            fclose(fptr_hedef);
        }
        fclose(fptr_kaynak);
    }

    return 0;
 }