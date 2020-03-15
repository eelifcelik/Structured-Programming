#include <stdio.h>
#include <stdlib.h>

/*  Kullanýcýnýn klavyeden girdiði AY numarasýna göre, o ayýn kaç günden oluþtuðunu ekrana yazan bir C
programý yazýnýz. Ýlgili program için kullanýcýnýn AY numarasý olarak 1-12 arasýnda (bu sayýlar dahil)
deðer girmesini saðlayýnýz. Eðer kullanýcý yanlýþ bir deðer girmiþ ise, ekrana bir hata mesajý bastýrarak
kullanýcýnýn doðru deðeri girmesini isteyiniz. Ýlgili kontrol yapýsý kullanýcý doðru deðer girene kadar
devam etmelidir. Þubat ayýnýn (2.ay) 30 günden oluþtuðu kabulünü yapýnýz.*/

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
		    printf("Mayýs ayi 31 gundur. \n");	
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
		    printf("Hatalý giris yaptiniz. \n ");	
	        scanf("%u", &ay);
	    
	 
	}
	
	
	return 0;
}
