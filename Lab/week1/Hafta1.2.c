/* Tam say� de�er tutabilen iki adet de�isken tan�mlay�n�z. Bu de�i�kenlere kullan�c�
klavyeden de�er girsin. Girilen de�erlerin toplam�n� ekrana yazd�ran bir C program� kodlay�n�z.*/


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
