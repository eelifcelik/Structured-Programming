#include <stdio.h>
#include <stdlib.h>

/*  Kullan�c�n�n klavyeden girdi�i AY numaras�na g�re, o ay�n ka� g�nden olu�tu�unu ekrana yazan bir C
program� yaz�n�z. �lgili program i�in kullan�c�n�n AY numaras� olarak 1-12 aras�nda (bu say�lar dahil)
de�er girmesini sa�lay�n�z. E�er kullan�c� yanl�� bir de�er girmi� ise, ekrana bir hata mesaj� bast�rarak
kullan�c�n�n do�ru de�eri girmesini isteyiniz. �lgili kontrol yap�s� kullan�c� do�ru de�er girene kadar
devam etmelidir. �ubat ay�n�n (2.ay) 30 g�nden olu�tu�u kabul�n� yap�n�z.*/

int main(int argc, char *argv[]) {
	
	unsigned int ay, gun;
	
    printf("Lutfen bir ay seciniz: \n");
	scanf("%u", &ay);

	
 
	switch(ay){
		
		case 1:
			printf("Ocak ayi 31 gundur. \n");
		break;
		
		case 2:
		    printf("Subat ayi 30 gundur. \n");
		break;
		
		case 3:
		    printf("Mart ayi 31 gundur. \n");
		break;
		
		case 4:
		    printf("Nisan ayi 30 gundur. \n");
		break;
			
		case 5:
		    printf("May�s ayi 31 gundur. \n");	
		break;
			
		case 6:
			printf("Haziran ayi 30 gundur. \n");
		break;
		
		case 7:
		    printf("Temmuz ayi 31 gundur. \n");
		break;
		
		case 8:
		    printf("Agustos ayi 30 gundur. \n");
		break;
		
		case 9:
		    printf("Eylul ayi 31 gundur. \n");
		break;
			
		case 10:
		    printf("Ekim ayi 30 gundur. \n");	
		break;
		
		case 11:
		    printf("Kasim ayi 31 gundur. \n");
		break;
			
		case 12:
		    printf("Aralik ayi 30 gundur. \n");	
	    break;
				
		default:
		    printf("Hatal� giris yaptiniz. \n ");	
	        scanf("%u", &ay);
	    
	 
	}
	
	
	return 0;
}
