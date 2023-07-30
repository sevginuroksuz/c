#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void cevap_anahtari_uret(char cevap_anahtari[], int S)  // cevap_anahtari_uret fonksiyonunu verilen yonergelere bakilarak yazildi.
{
    int i;
    srand(time(0));     
    while(i<S)
    {
        int s = rand()%5+1;   // Rastgele sayi uretmek icin time.h kutuphanesindeki rand() fonksiyonundan yararlanildi.
        switch (s)
    {
    case 1:                      // Switch case yapilari kullanilarak cevap anahtari rastgele sistem tarafindan olusturulan rakamlarla case bloklari sayesinde olusturuldu.
        cevap_anahtari[i]='A';   
        i++;
        break;
    case 2:
        cevap_anahtari[i]='B';
        i++;
        break;    
    case 3:
        cevap_anahtari[i]='C';
        i++;
        break;
    case 4:
        cevap_anahtari[i]='D';
        i++;
        break;
    case 5:
        cevap_anahtari[i]='E';
        i++;
        break;
    default:
      break;
    }
    }
}

void cevap_anahtari_yazdir(char cevap_anahtari[], int S)   // cevap_anahtari_yazdir fonksiyonunu verilen yonergelere bakilarak yazildi.
{
    printf("\nCevap Anahtari: \n");
        for(int i=0; i<S; i++)          
        {
            printf("%c |",cevap_anahtari[i]);   // cevap_anahtari isimli diziyi karakter karakter for dongusuyle ekrana bastitirildi bunun sebebi aralarinda olan | sembolu oldugu icin bu sekilde yapildi. Daha kolay bir yontem olan %s ifadesiyle de dizi dogrudan yazdirilabilinirdi.
        }
}

void sinavi_uygula(char ogrenci_cevaplari[][100], char cevap_anahtari[], int N,int S, double B, double D) 
{
    int i,p, j;
    float s;              // sinavi_uygula isimli fonksiyon yonergelere uyacak sekilde parametreleri yazildi.
    
  for(i=0; i<=N; i++)
  {
       j=0;
       
        srand(time(0));
       while(j!=S)
    {  
        
        s = rand()%10;  // kullanicidan alinacak olan dogru (D) ve bos (B) ihtimallerine gore sivai uygulamak icin rastgele sayi uretme fonksiyonu rand() yararlanildi.
        s=s/10;   
        if(D==s)
        {
          ogrenci_cevaplari[j][i]=cevap_anahtari[j];
          j++;
        }
        else if(B==s)
        {
            ogrenci_cevaplari[j][i]='X';   // Bos birakma ihtimalleri eslestiginde X karakteri diziye atildi.
            j++;
        }
        else
        {
            p = rand()%5+1;
            switch (p)
            {
              case 1:
               ogrenci_cevaplari[j][i]='A';
               j++;
                break;
              case 2:
               ogrenci_cevaplari[j][i]='B';
               j++;
               break;    
              case 3:
               ogrenci_cevaplari[j][i]='C';
               j++;
               break;
              case 4:
               ogrenci_cevaplari[j][i]='D';
               j++;
               break;
              case 5:
               ogrenci_cevaplari[j][i]='E';
               j++;
               break;
              default:
              break;
              
            
            }        
        }
      
    } 
    
      
  }
  
        
    
}
void ogrenci_cevabini_yazdir(char ogrenci_cevaplari[][100], int ogrenci_ID, int S)   
{
    printf("%d. ogrencinin cevaplari: \n",ogrenci_ID);     
    for(int i=0; i<S; i++)                              // Ogrencilerin cevaplari alinan fonksiyon parametrelerinden 
                                                              // yararlanilarak for dongu yardimiyla ekrana yazdirildi.
        printf("%c |",ogrenci_cevaplari[i][ogrenci_ID]);
        printf("\n");
   

}

void ogrencileri_puanla(char ogrenci_cevaplari[][100], char cevap_anahtari[], double HBN[])
{
    int soruS, dogruS, yanlisS ;
    double soruP;
      soruS=dogruS+yanlisS;
      soruP=100/soruS;                                     // Ogrencilerin dogru ve yanlis sayilari for donguleri yardiyla 
                                                       //hesaplandi ve 4 yanlis 1 dogruyu goturecek sekilde ogrenci puanlari     
                                                          // hesaplanip ogrenci_cevaplari dizisine atildi.
    for(int i=0; i!='\0'; i++)
     for(int j=0; j!='\0'; j++)
       {
        if(ogrenci_cevaplari[j][i]==cevap_anahtari[j])
            dogruS++;
        else 
        {
            yanlisS++;
            dogruS=dogruS-(yanlisS/4);
            HBN[i]= dogruS*soruP;

        }
            
       }
}

double sinif_ortalamasi_hesapla(double HBN[], int N)    // Sinif ortalamasi ogrenci notlari ve ogrenci sayisina bolunerek 
                                                       //  hesaplandi ve toplam degiskenine atildi.
{
    double toplam;
    for(int i=0; i!='\0'; i++)
        toplam += HBN[i];
    
    return toplam/N;
}

double standart_sapma_hesapla(double ortalama, double HBN[], int N)  // standart sapma verilen formule gore yazildi ve hesaplandı.
{
    double temp;
    for(int i=0; i!='\0'; i++)
    
        temp =HBN[i]-ortalama;
        return sqrt(pow(temp,2)/N);
        
}


double T_skoru_hesapla(double ortalama, double HBN[], int N, double std, double t_skoru[])
{
    double temp=0;
    for(int i=0; i<=N; i++)
    {
        temp=((HBN[i]-ortalama)/std*10)+60;
        t_skoru[i]=temp;
        return t_skoru[i];
    }
        
    
}

int main()
{
      
       
       int N, S, ogrenci_ID;
       double B, D, Ort, Std, T, sinif_düzeyi;
       
       printf("Ogrenci sayisini giriniz: \n");
       scanf("%d",&N);
       if(N>100 && N<=0)
      {
         printf("Yanlis deger. Lutfen tekrar bir ogrenci sayisi giriniz: \n");
         scanf("%d",&N);
      }
      else
      {
         printf("Soru sayisini giriniz: \n");
         scanf("%d",&S);
         printf("Herhangi bir sorunun bos birakilma olasiligini giriniz: \n");
         scanf("%lf",&B);
         if(B<=0 && B>=1)
         {
           printf("Yanlis deger. Lutfen tekrar bir bos birakilma olasiligi giriniz: \n");
           scanf("%lf",&B);
         }
         else
         {
             printf("Lütfen herhangi bir sorunun dogru cevaplanma olasiligini giriniz: \n");
             scanf("%lf",&D);
             if(D<=0 && D>=1)
            {
               printf("Yanlis deger. Lutfen tekrar bir dogru cevaplanma olasiligi giriniz: \n");
               scanf("%lf",&D);
            }
         }
      }

       char cevap_a[S];
       char ogrenci_c[S][100];
       double T_skoru[N];
       double HBN[N];
       char ogrenci_harf_notu[N];

       cevap_anahtari_uret(cevap_a,S);
       cevap_anahtari_yazdir(cevap_a,S);
      
       printf("\n\n");
      for(ogrenci_ID=0; ogrenci_ID<=20;ogrenci_ID++ ) 
        {
            sinavi_uygula(ogrenci_c,cevap_a,N,S,B,D);
            ogrencileri_puanla(ogrenci_c,cevap_a,HBN);
            ogrenci_cevabini_yazdir(ogrenci_c,ogrenci_ID,S);
        } 
            
      Ort=sinif_ortalamasi_hesapla(HBN,N);
      Std=standart_sapma_hesapla(Ort,HBN,N);
      T=T_skoru_hesapla(Ort,HBN,N,Std,T_skoru);
      printf("\n\nSinif ortalamasi: %.2lf, standart sapma: %.2lf \n",Ort, Std);

        if(sinif_düzeyi>80)
           printf("Sinif duzeyi: Ustun basari \n");
        else if(sinif_düzeyi>70 && sinif_düzeyi<=80)
           printf("Sinif duzeyi: Mukemmel \n");
        else if(sinif_düzeyi>62.5 && sinif_düzeyi<=70)
            printf("Sinif duzeyi: Cok iyi \n");
        else if(sinif_düzeyi>57.5 && sinif_düzeyi<=62.5)
            printf("Sinif duzeyi: Iyi \n");
        else if(sinif_düzeyi>52.5 && sinif_düzeyi<=57.5)   
            printf("Sinif duzeyi: Ortanin ustu \n");
        else if(sinif_düzeyi>47.5 && sinif_düzeyi<=52.5)
            printf("Sinif duzeyi: Orta \n");
         else if(sinif_düzeyi>42.5 && sinif_düzeyi<=47.5)
            printf("Sinif duzeyi: Zayif \n");
         else
            printf("Sinif duzeyi: Kotu \n");
           



      for(int k=0; k<=2*N; k++)
      {
        sinif_düzeyi=Ort;
        if(sinif_düzeyi>80)
        {
             if(T_skoru[k]>=67)
                {
                    ogrenci_harf_notu[k]='A';
                    ogrenci_harf_notu[k+1]='A';
                }
               else if(T_skoru[k]>=62 && T_skoru[k]<67)
                {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='A';
                }
                else if(T_skoru[k]>=57 && T_skoru[k]<62)
                 {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=52 && T_skoru[k]<57)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=47 && T_skoru[k]<52)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=42 && T_skoru[k]<47)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=37 && T_skoru[k]<42)
                 {
                    ogrenci_harf_notu[k]='D';
                   ogrenci_harf_notu[k+1]='D';

                 }
                 else if(T_skoru[k]>=32 && T_skoru[k]<37)
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='D';

                 }
                 
                 else 
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='F';
                 }
 
        }
        else if(sinif_düzeyi>70 && sinif_düzeyi<=80)
        {
            if(T_skoru[k]>=69)
                {
                    ogrenci_harf_notu[k]='A';
                    ogrenci_harf_notu[k+1]='A';
                }
               else if(T_skoru[k]>=64 && T_skoru[k]<69)
                {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='A';
                }
                else if(T_skoru[k]>=59 && T_skoru[k]<64)
                 {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=54 && T_skoru[k]<59)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=49 && T_skoru[k]<54)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=44 && T_skoru[k]<49)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=39 && T_skoru[k]<44)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='D';

                 }  
                 else if(T_skoru[k]>=34 && T_skoru[k]<39)
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='D';

                 }
                 else 
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='F';
                 }
        
        }
        else if(sinif_düzeyi>62.5 && sinif_düzeyi<=70)
        {
            if(T_skoru[k]>=71)
                {
                    ogrenci_harf_notu[k]='A';
                    ogrenci_harf_notu[k+1]='A';
                }
               else if(T_skoru[k]>=66 && T_skoru[k]<71)
                {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='A';
                }
                else if(T_skoru[k]>=61 && T_skoru[k]<66)
                 {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=56 && T_skoru[k]<61)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=51 && T_skoru[k]<56)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=46 && T_skoru[k]<51)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=41 && T_skoru[k]<46)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='D';
                 }
                 else if(T_skoru[k]>=36 && T_skoru[k]<41)
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='D';

                 }
                 else
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='F';
                 }
        }
        else if(sinif_düzeyi>57.5 && sinif_düzeyi<=62.5)
        {
            if(T_skoru[k]>=73)
                {
                    ogrenci_harf_notu[k]='A';
                    ogrenci_harf_notu[k+1]='A';
                }
               else if(T_skoru[k]>=68 && T_skoru[k]<73)
                {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='A';
                }
                else if(T_skoru[k]>=63 && T_skoru[k]<68)
                 {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=58 && T_skoru[k]<63)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=53 && T_skoru[k]<58)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=48 && T_skoru[k]<53)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=43 && T_skoru[k]<48)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='D';
                 }
                 else if(T_skoru[k]>=38 && T_skoru[k]<43)
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='D';

                 }
                 else 
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='F';
                 }
        }
        else if(sinif_düzeyi>52.5 && sinif_düzeyi<=57.5)
        {
            if(T_skoru[k]>=75)
                {
                    ogrenci_harf_notu[k]='A';
                    ogrenci_harf_notu[k+1]='A';
                }
               else if(T_skoru[k]>=70 && T_skoru[k]<75)
                {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='A';
                }
                else if(T_skoru[k]>=65 && T_skoru[k]<70)
                 {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=60 && T_skoru[k]<65)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=55 && T_skoru[k]<60)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=50 && T_skoru[k]<55)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=45 && T_skoru[k]<50)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='D';
                 }
                 else if(T_skoru[k]>=40 && T_skoru[k]<45)
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='D';

                 }
                 else 
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='F';
                 }
            
        }
        else if(sinif_düzeyi>47.5 && sinif_düzeyi<=52.5)
        {
            if(T_skoru[k]>=77)
                {
                    ogrenci_harf_notu[k]='A';
                    ogrenci_harf_notu[k+1]='A';
                }
               else if(T_skoru[k]>=72 && T_skoru[k]<77)
                {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='A';
                }
                else if(T_skoru[k]>=67 && T_skoru[k]<72)
                 {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=62 && T_skoru[k]<67)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=57 && T_skoru[k]<62)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=52 && T_skoru[k]<57)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=47 && T_skoru[k]<52)
                 {
                    ogrenci_harf_notu[k]='D';
                     ogrenci_harf_notu[k+1]='D';
                 }
                 else if(T_skoru[k]>=42 && T_skoru[k]<47)
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='D';

                 }
                 else 
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='F';
                 }
            
        }
        else if(sinif_düzeyi>42.5 && sinif_düzeyi<=47.5)
        {
            if(T_skoru[k]>=79)
                {
                    ogrenci_harf_notu[k]='A';
                    ogrenci_harf_notu[k+1]='A';
                }
               else if(T_skoru[k]>=74 && T_skoru[k]<79)
                {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='A';
                }
                else if(T_skoru[k]>=69 && T_skoru[k]<74)
                 {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=64 && T_skoru[k]<69)
                {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=59 && T_skoru[k]<64)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=54 && T_skoru[k]<59)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=49 && T_skoru[k]<54)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='D';
                 }
                 else if(T_skoru[k]>=44 && T_skoru[k]<49)
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='D';

                 }
                 else 
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='F';
                 }
            
        }
        else
        {
            if(T_skoru[k]>=81)
                {
                    ogrenci_harf_notu[k]='A';
                    ogrenci_harf_notu[k+1]='A';
                }
               else if(T_skoru[k]>=76 && T_skoru[k]<81)
                {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='A';
                }
                else if(T_skoru[k]>=71 && T_skoru[k]<76)
                 {
                    ogrenci_harf_notu[k]='B';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=66 && T_skoru[k]<71)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='B';
                 }
                 else if(T_skoru[k]>=61 && T_skoru[k]<66)
                 {
                    ogrenci_harf_notu[k]='C';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=56 && T_skoru[k]<61)
                 {
                    ogrenci_harf_notu[k]='D';
                    ogrenci_harf_notu[k+1]='C';
                 }
                 else if(T_skoru[k]>=51 && T_skoru[k]<56)
                 {
                    ogrenci_harf_notu[k]='D';
                     ogrenci_harf_notu[k+1]='D';
                 }
                 else if(T_skoru[k]>=46 && T_skoru[k]<51)
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='D';

                 }
                 else 
                 {
                    ogrenci_harf_notu[k]='F';
                    ogrenci_harf_notu[k+1]='F';
                 }

        }


      }
 
       
        
          printf("\nOgrenci notlari: \n");
          for(int l=0; l<=N; l++)
          {
            printf("%.3d. ogrencinin HBN: %.2lf, T-skoru: %.2lf, harf notu:%c%c \n",l, HBN[l], T_skoru[l], ogrenci_harf_notu[l],ogrenci_harf_notu[l+1]);    
          }
                 

   return 0;
}