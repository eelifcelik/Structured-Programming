#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen 3 basamaklý bir tam sayýnýn onlar basamaðýndaki rakamý ve bu rakamýn tek
mi çift mi olduðunu ekrana yazdýran bir C programý yazýnýz. Program girilen sayýnýn 3 basamaklý
olup olmadýðýný kontrol etmeli ve hatalý giriþ varsa ekrana “Hatali Girdi” yazdýrýp programý
sonlandýrmalýdýr.*/

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
