# include <stdio.h>
# include <stdlib.h>

/* Kullanicidan km veya mil cinsinden ne kadar yol katettiği bilgisi alinacak. Eger alinan mesafe km cinsindense mile mil cinsinden girilmisse km'ye ceviren algoritmayi kuro kodu yaziniz. program ciktisi "A mil = B km" veya "B mil = A km" olmalidir.
*/

int main(){
    float donusturulen1, donusturulen2;
    char birim;
    float yol;
    printf("Hnagi birimde deger girilcek?\n(Mil icin m, kilometre icin k giriniz.)\n");
    scanf("%s",&birim);
    printf("Kac km yol aldiniz?\n");
    scanf("%f",&yol);

    if(birim=='m'){
        donusturulen1= yol*1.60,
        printf("%.2f mil = %.2f km\n",yol,donusturulen1);
    
    } else if(birim=='k'){
        donusturulen2 = yol*0.62;
        printf("%.2f km = %.2f mil",yol,donusturulen2);

    }
    else 
       ;


    return 0;
}