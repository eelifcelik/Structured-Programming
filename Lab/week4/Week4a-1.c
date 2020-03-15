#include <stdio.h>
#include <stdlib.h>

/*.YAY*/

int menu(void);

int oyun(void);

int main(int argc, char *argv[]) {
	
    menu();

	return 0;
}


int menu(void){
	
	int sec,x;

	printf("<<Oyunu oynamak icin 1 \n Cikis yapmak icin -1 giriniz>> \n\n ");
	scanf("%d", &sec);
    
    while(sec!=1 && sec!=-1){
    	
		printf("Yanlis Deger Girdiniz\n Tekrar seciminizi girin: \n");
		scanf("%d",&sec);
	}
	
	if(sec==-1){
		
		printf("Oyundan Cikis Yaptiniz");
		return 0;
	}
	
	else{	
	    oyun();	
		
	}
	

}


int oyun(void){
	
	int sayi,tahmin,sec;
	sec=1;
	
	sayi=10;
	
	printf("<<<< SAYI TAHMIN OYUNUNA HOS GELDINIZ >>>> \n\n\n");

while(sec==1){

	printf(" Lutfen tahmininizi girin : \n");
	scanf("%d", &tahmin);
			
	while(tahmin!=10){
		
		if(tahmin<sayi){
		printf("Daha buyuk bir sayi sec\n\n");
	    printf("Yeniden tahmininizi girin: \n\n");
		scanf("%d", &tahmin);
		}
		
	    else if(tahmin>sayi){
		printf("Daha kucuk bir sayi sec\n\n");
		printf("Yeniden tahmininizi girin: \n\n");
		scanf("%d", &tahmin);
	
        }
			
	}  
	
    printf(" CEVABINIZ DOGRU! TEBRIKLER \n\n");
	printf("Devam etmek icin 1 Cikmak icin -1 girin:");
    scanf("%d", &sec);
    
      
}

}
