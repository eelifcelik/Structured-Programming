#include <stdio.h>
#include <stdlib.h>

/* X hastal���na te�his koyan sistemin �al��ma �ekli �u �ekildedir. Hastaya ait kan bas�nc�, ya� ve
test-1 bilgileri klavyeden al�n�r. Buna g�re:
a. Hastan�n kan bas�nc� 100�den k���k ise ki�i sa�l�kl�d�r.
b. Ki�inin kan bas�nc� 100�den b�y�k ise ya� ve test-1 de�erlerine bak�l�r.
i. Ya�� 50�den b�y�k ve test-1 de�eri 100�e e�it veya b�y�kse ki�i hastad�r.
ii. Ya�� 35�den b�y�k ve test-1 de�eri 150�den b�y�kse ki�i hastad�r.
iii. Ya�� 35 veya 35�den k���k ve test-1 de�eri 100�den k���k ise ki�i sa�l�kl�d�r.*/

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
