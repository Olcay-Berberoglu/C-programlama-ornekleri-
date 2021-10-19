//  KLAVYEDEN GÝRÝLEN ÝKÝ SAYIDAN BÝRÝNCÝSÝ BÜYÜK ÝSE ÇARPMA DEÐÝLSE  TOPLAMA YAPAN PROGRAM

#include<stdio.h>
#include<stdlib.h>
main(){
 
        int a,b,sonuc=0;
        printf("Birinci sayi gir ");
		scanf("%d",&a);
			
		 printf("Ýkinci sayi gir ");
		scanf("%d",&b);	
		if(a>b){
			sonuc=a*b;
			printf("%d",sonuc);
		}
		else{
		
			sonuc=a+b;
			printf("%d",sonuc);
		}
	
	
      }
