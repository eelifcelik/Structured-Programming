/* Tam sayi de�er tutabilen uc adet de�isken tan�mlay�n�z. Bu de�isenllere kullan�c�
klavyeden deger girsin. �lk sayinin bir eksi�i, ikinci sayinin 2 fazlas� ve ucuncu say�n�n 
uc kat�n�n ortalamas�n� ulup ekrana ondal�kl� sayi seklinde yazd�ran bir C program� kodlay�n�z.*/

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
