#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen 3 basamakl� bir tam say�n�n onlar basama��ndaki rakam� ve bu rakam�n tek
mi �ift mi oldu�unu ekrana yazd�ran bir C program� yaz�n�z. Program girilen say�n�n 3 basamakl�
olup olmad���n� kontrol etmeli ve hatal� giri� varsa ekrana �Hatali Girdi� yazd�r�p program�
sonland�rmal�d�r.*/

int main(int argc, char *argv[]) {
	
	int sayi,yuzler,onlar;

	
	
	printf(" Lutfen uc basamakli bir sayi girin: \n");
	scanf("%d", &sayi);
	
	
	if(sayi/100>=1){
		
	yuzler = sayi / 100;             
    sayi = sayi - (yuzler * 100);             
    onlar = sayi / 10; 
    printf("Yuzler basamagi %d \n", yuzler);
    printf("Onlar basamagi %d \n ", onlar);
    
        if(onlar%2==0){
        	printf("onlar basamagi cifttir");
		}
        else{
        	printf("onlar basamagi tektir");
		}

	}
	
	else{
		printf("Hatali girdi !!!");
		return 0;
	}

	return 0;
}
