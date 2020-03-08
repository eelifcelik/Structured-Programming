/* Tam sayý deðer tutabilen iki adet deðisken tanýmlayýnýz. Bu deðiþkenlere kullanýcý
klavyeden deðer girsin. Girilen deðerlerin toplamýný ekrana yazdýran bir C programý kodlayýnýz.*/


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int sayi1,sayi2,top;
	
	printf("Ilk sayiyi girin:");
	scanf("%d", &sayi1);
	printf("Ikinci sayiyi girin:");
	scanf("%d" , &sayi2);
	
	top = sayi1 + sayi2;
	
	printf("Iki sayinin toplami %d" , top);
	

	return 0;
}
