#include<stdio.h>
#include<stdlib.h>

// Programa girilen sayýya kadar olan sayýlarý ekrana yazdýran program

 main (){

int sayi ;
	do{

	printf("Bir sayi giriniz= ");
	scanf("%d",&sayi);
	if(sayi<=0){
		printf("sýfýrdan buyuk bir sayý gýr");
	}
	else{
		for (int i=1;i<=sayi ;i++){
			printf  ("%d \n ",i);
		}
		 break;
       }
       	} while(sayi<=0);
	
	}
