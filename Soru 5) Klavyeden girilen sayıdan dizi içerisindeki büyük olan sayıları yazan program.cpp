#include<stdio.h>
#include<stdlib.h>

// Klavyeden girilen say�dan dizi i�erisindeki b�y�k olan say�lar� yazan program

 main (){
	int a[10]={25,22,17,68,32,5,47,3,98,1} ;
	int sayi;
	printf("bir sayi giriniz :");
	scanf("%d",&sayi);
	for (int i=0;i<10;i++){
		if(sayi <a [i]){
			printf("%d \n",a[i]);

}}}
