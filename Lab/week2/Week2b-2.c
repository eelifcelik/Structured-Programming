#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen 4 basamakl� bir tam say�n�n birler basama��ndaki rakam ile onlar
basama��ndaki rakam�n toplam�n�n tek mi �ift mi oldu�unu ekrana yazd�ran bir C program�
yaz�n�z. Program girilen say�n�n 4 basamakl� olup olmad���n� kontrol etmeli ve hatal� giri� varsa
ekrana �Hatali Girdi� yazd�r�p program� sonland�rmal�d�r. */

int main(int argc, char *argv[]) {
	
	int sayi,binler,yuzler,onlar,birler,kontrol;
	
	printf("Lutfen dort basamakli sayi girin: \n");
	scanf("%d", &sayi);
	
	
	printf("Girdiginiz sayi %d \n ", sayi);
	
    if(sayi/1000>=1){
    	
    	binler = sayi/1000;
    	sayi = sayi - (binler*1000);
    	yuzler = sayi/100;
    	sayi = sayi - (yuzler*100);
    	onlar = sayi/10;
    	sayi = sayi - (onlar*10);
    	birler = sayi/1;
    	
    	kontrol= birler + onlar;
    	
    	if(kontrol%2==0){
    		printf("Toplamlari cift");
		}
    	
    	else{
    		
    		printf("Toplamlari tek");
    
		}
    	
	}	
	
	else{
		printf("<< Hatali girdi >>");
		
	    return 0;
}


	return 0;
}
