#include <stdio.h>
#include <stdlib.h>

/* ogrenci notunu harf seklinde veren bir c programi yazýn */

int main(int argc, char *argv[]) {
	
	int grade;
	printf("Lutfen notunuzu girin : \n");
	scanf("%d",&grade);

	while(0<=grade || grade<100){
	
	
	if(grade<=100 && grade>=90){
		printf(" Notunuzun karsiligi AA");
	}
	
	else if(grade<=89 && grade>=85){
		printf("Notunuzun karsiligi AB");
	}
	
	else if(grade<=84 && grade>=80){
		printf("Notunuzun karsiligi BB");
	}
	
	else if(grade<=79 && grade>=70){
		printf("Notunuzun karsiligi CB");
	}
	else if(grade<=69 && grade>=60){
		printf("Notunuzun karsiligi CC");
	}
	else if(grade<=59 && grade>=55){
		printf("Notunuzun karsiligi DC");
	}
    else if(grade<=54 && grade>=50){
		printf("Notunuzun karsiligi DD");
	} 
	else if(grade<=49 && grade>=40){
		printf("Notunuzun karsiligi FD");
	}
	else{
		printf("Notunuzun karsiligi FF");
	}	
	
	break;
	}

	return 0;
}
