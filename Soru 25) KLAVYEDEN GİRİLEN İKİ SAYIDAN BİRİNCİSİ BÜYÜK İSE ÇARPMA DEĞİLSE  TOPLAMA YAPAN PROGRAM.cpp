//  KLAVYEDEN G�R�LEN �K� SAYIDAN B�R�NC�S� B�Y�K �SE �ARPMA DE��LSE  TOPLAMA YAPAN PROGRAM

#include<stdio.h>
#include<stdlib.h>
main(){
 
        int a,b,sonuc=0;
        printf("Birinci sayi gir ");
		scanf("%d",&a);
			
		 printf("�kinci sayi gir ");
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
