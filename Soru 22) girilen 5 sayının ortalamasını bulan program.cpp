#include <stdio.h>
#include <conio.h>
// girilen 5 say�n�n ortalamas�n� bulan program
main(){int i=1,t=0,a=0;
	for(i;i<=5;i++)
	{
		printf("%d. Sayiyi giriniz =>",i);scanf("%d",&a);
		t=t+a;
	}
	float ft=t,fi=i;
	printf("Sayilarin ortalamasi => %.2f",ft/fi);getch();
}
