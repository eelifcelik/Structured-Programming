#include <stdio.h>
#include <stdlib.h>

/* Bir sayý tahmin oyunu tasarlayýnýz. Bu oyunda kullanýcý önceden tanýmlý bir sayýyý tahmin etmeye
çalýþsýn. Kullanýcý tahmin deðerini klavyeden girsin Kullanýcý tahmini küçük ise “Daha Buyuk Tahmin
Yap”, kullanýcý tahmini büyükse “Daha Kucuk Tahmin Yap” uyarýsý verilsin. Kullanýcý sayýyý tutturana
kadar tahmin yapmaya devam etsin.
Kullanýcý doðru tahmin yaptýðýnda, “Tebrikler Bildiniz” mesajý yazdýrýlsýn. Sonrasýnda oyuna devam
edip etmek istemediði sorulsun. Kullanýcý cevap olarak 1 girdiði sürece oyun devam etsin. Kullanýcý -1
girmiþ ise oyun sonlansýn. */

int main(int argc, char *argv[]) {
	
	int sayi,tahmin,sec;
	sec=1;
	
	sayi=10;
	
	printf("<<<< SAYI TAHMIN OYUNUNA HOS GELDINIZ >>>> \n");


while(sec==1){

	
	printf(" Lutfen tahmininizi girin : \n");
	scanf("%d", &tahmin);
			
	while(tahmin!=10){
		
		if(tahmin<sayi){
		printf("Daha büyük bir sayi sec\n");
	    printf("Yeniden tahmininizi girin: \n");
		scanf("%d", &tahmin);
		}
		
	    else if(tahmin>sayi){
		printf("Daha kucuk bir sayi sec\n");
		printf("Yeniden tahmininizi girin: \n");
		scanf("%d", &tahmin);
			
		
        }
			
	}  
	
    printf(" CEVABINIZ DOGRU! TEBRIKLER \n");
	printf("Devam etmek icin 1 Cýkmak icin -1 girin:");
    scanf("%d", &sec);
        if(sec==-1){
            return 0;
	    }    
			
}

        
	return 0;
}
