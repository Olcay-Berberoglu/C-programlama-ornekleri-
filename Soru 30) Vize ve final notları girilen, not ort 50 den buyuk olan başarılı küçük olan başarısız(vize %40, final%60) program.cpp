// Vize ve final notlar� girilen, not ort 50 den buyuk olan ba�ar�l� k���k olan ba�ar�s�z(vize %40, final%60) program

   


#include<stdio.h>
#include<stdlib.h>
main(){
	int vize,final,ort=0;
	printf("vize s�nav�n� gir = ");
	scanf("%d",&vize);
	printf("final s�nav�n� gir = ");
	scanf("%d",&final);
	ort=vize*0.4+final*0.6;
	if(ort>=50)
	printf("%d basar�l�",ort);
	else 
	   printf("%d basar�s�z",ort);
	

	


      }
