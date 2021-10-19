// Vize ve final notlarý girilen, not ort 50 den buyuk olan baþarýlý küçük olan baþarýsýz(vize %40, final%60) program

   


#include<stdio.h>
#include<stdlib.h>
main(){
	int vize,final,ort=0;
	printf("vize sýnavýný gir = ");
	scanf("%d",&vize);
	printf("final sýnavýný gir = ");
	scanf("%d",&final);
	ort=vize*0.4+final*0.6;
	if(ort>=50)
	printf("%d basarýlý",ort);
	else 
	   printf("%d basarýsýz",ort);
	

	


      }
