/* Tam sayi deðer tutabilen uc adet deðisken tanýmlayýnýz. Bu deðisenllere kullanýcý
klavyeden deger girsin. Ýlk sayinin bir eksiði, ikinci sayinin 2 fazlasý ve ucuncu sayýnýn 
uc katýnýn ortalamasýný ulup ekrana ondalýklý sayi seklinde yazdýran bir C programý kodlayýnýz.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	float ort;
	
	printf("Birinci sayiyi girin:");
	scanf("%d", &a);
	printf("Ikinci sayiyi girin:");
	scanf("%d", &b);
	printf("Ucuncu sayiyi girin:");
	scanf("%d", &c);
	
	a= a-1;
	b= b+2;
	c= 3*c;
	
	ort= (a+b+c)/3;
	printf("Ortalama %f", ort);
	
	
	return 0;
}
