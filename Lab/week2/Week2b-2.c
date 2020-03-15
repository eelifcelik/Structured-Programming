#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen 4 basamaklý bir tam sayýnýn birler basamaðýndaki rakam ile onlar
basamaðýndaki rakamýn toplamýnýn tek mi çift mi olduðunu ekrana yazdýran bir C programý
yazýnýz. Program girilen sayýnýn 4 basamaklý olup olmadýðýný kontrol etmeli ve hatalý giriþ varsa
ekrana “Hatali Girdi” yazdýrýp programý sonlandýrmalýdýr. */

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
