#include <stdio.h>
#include <stdlib.h>

/* X hastalýðýna teþhis koyan sistemin çalýþma þekli þu þekildedir. Hastaya ait kan basýncý, yaþ ve
test-1 bilgileri klavyeden alýnýr. Buna göre:
a. Hastanýn kan basýncý 100’den küçük ise kiþi saðlýklýdýr.
b. Kiþinin kan basýncý 100’den büyük ise yaþ ve test-1 deðerlerine bakýlýr.
i. Yaþý 50’den büyük ve test-1 deðeri 100’e eþit veya büyükse kiþi hastadýr.
ii. Yaþý 35’den büyük ve test-1 deðeri 150’den büyükse kiþi hastadýr.
iii. Yaþý 35 veya 35’den küçük ve test-1 deðeri 100’den küçük ise kiþi saðlýklýdýr.*/

int main(int argc, char *argv[]) {
	
	int kb,yas,test1;
	
	
	printf("X hastaligi teshis sistemine HOSGELDINIZ !!! \n");
	
	printf("Lutfen Kan basincinizi girin: \t \n");
	scanf("%d", &kb);
	
	printf("Lufen yasinizi girin: \t \n");
	scanf("%d", &yas);
	
	printf("Lutfen Test-1 degerinizi girin : \t \n");
	scanf("%d", &test1);
	
	if(kb<100){
		printf(" Hastamiz saglikli !!!");
		
	}
	
	else{
		
		if(yas>50 && test1>=100){
			printf("<< Hastalik tespit edildi >>");
		}
		else if(yas>35 && test1>150){
			printf("<< Hastalik tespit edildi >>");
		}
		else{
			if(test1<100){
					printf(" Hastamiz saglikli !!!");
			}
		}
	}
	
	
	
	return 0;
}
