#include <stdio.h>
#include <conio.h>

// Girilen 20 say�dan b�y�k olan say�lar�n k���k olan say�lara oran�n� bulan program 
main()
{
	int a,bt,kt;
	for(int i =1;i<=20;i++)
	{
		printf("%d. Sayiyi giriniz =>",i);
		scanf("%d",&a);
		
		if(a>=50)
		{
			bt=bt+a;
		}
		else
		{
			kt=kt+a;
		}
	}
	float fkt=kt,fbt=bt;
	printf("Buyuklerin olanlar�n kucuk olanlara oran� => %2.f",fbt/fkt);
	getch();
}
