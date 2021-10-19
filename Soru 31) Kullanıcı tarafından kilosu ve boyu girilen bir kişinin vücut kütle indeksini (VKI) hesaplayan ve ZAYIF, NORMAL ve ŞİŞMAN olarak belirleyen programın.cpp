// Kullanýcý tarafýndan kilosu ve boyu girilen bir kiþinin vücut kütle indeksini (VKI) hesaplayan ve ZAYIF, NORMAL ve ÞÝÞMAN olarak belirleyen programýn 

   


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
	printf("zayýf");
	else if(vki<25)
	printf("normal");
	else
	printf("sisman");
	


      }
