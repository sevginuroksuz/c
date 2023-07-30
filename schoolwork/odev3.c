#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char isim[8]={'s','e','v','g','i','n','u','r'}; //isim adli bir char dizisi tanimlanir.
    int i;
    int elemanSayisi=(sizeof isim/sizeof*isim); //isim dizisinin boyutu sizeof fonksiyonu yardımıyla bulunur.
    char tersIsim[elemanSayisi]; //isim dizisinin tersini yazdiracak tersIsim dizisi tanimlanir.
    int temp=0;
    for(i=elemanSayisi-1;i>=0;i--){ //for dongusu kurulur.
        tersIsim[i]=isim[temp]; //isim dizisindeki eleman tersIsim dizisindeki elemana esit ise temp isimli sayac bir artirilir.
        temp++;
    }
    for(int j=0;j<elemanSayisi;j++){ //for dongusu kurulur.
    printf("%c",tersIsim[j]);  //isim dizisinin tersi tersIsim dizisine yazdirilir.
    }
    return 0;
}
