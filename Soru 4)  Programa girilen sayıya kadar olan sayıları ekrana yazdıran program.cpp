#include<stdio.h>
#include<stdlib.h>

// Programa girilen say�ya kadar olan say�lar� ekrana yazd�ran program

 main (){

int sayi ;
	do{

	printf("Bir sayi giriniz= ");
	scanf("%d",&sayi);
	if(sayi<=0){
		printf("s�f�rdan buyuk bir say� g�r");
	}
	else{
		for (int i=1;i<=sayi ;i++){
			printf  ("%d \n ",i);
		}
		 break;
       }
       	} while(sayi<=0);
	
	}
