#include <stdio.h>
#include <stdlib.h>

/* Bir say� tahmin oyunu tasarlay�n�z. Bu oyunda kullan�c� �nceden tan�ml� bir say�y� tahmin etmeye
�al��s�n. Kullan�c� tahmin de�erini klavyeden girsin Kullan�c� tahmini k���k ise �Daha Buyuk Tahmin
Yap�, kullan�c� tahmini b�y�kse �Daha Kucuk Tahmin Yap� uyar�s� verilsin. Kullan�c� say�y� tutturana
kadar tahmin yapmaya devam etsin.
Kullan�c� do�ru tahmin yapt���nda, �Tebrikler Bildiniz� mesaj� yazd�r�ls�n. Sonras�nda oyuna devam
edip etmek istemedi�i sorulsun. Kullan�c� cevap olarak 1 girdi�i s�rece oyun devam etsin. Kullan�c� -1
girmi� ise oyun sonlans�n. */

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
		printf("Daha b�y�k bir sayi sec\n");
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
	printf("Devam etmek icin 1 C�kmak icin -1 girin:");
    scanf("%d", &sec);
        if(sec==-1){
            return 0;
	    }    
			
}

        
	return 0;
}
