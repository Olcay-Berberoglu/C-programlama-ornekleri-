// Kullan�c� taraf�ndan kilosu ve boyu girilen bir ki�inin v�cut k�tle indeksini (VKI) hesaplayan ve ZAYIF, NORMAL ve ���MAN olarak belirleyen program�n 

   


#include<stdio.h>
#include<stdlib.h>
main(){

int kilo,boy,vki;
printf("kilo gir = ");
	scanf("%d",&kilo);
	printf("boy gir = ");
	scanf("%d",&boy);
	vki=kilo/boy*2;
	if(vki<19)
	printf("zay�f");
	else if(vki<25)
	printf("normal");
	else
	printf("sisman");
	


      }
