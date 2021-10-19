#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Sayi tahmin etme oyunu
main()
{
	srand(time(NULL));//Her saniye için farklý random sayý alýr.
	
	int r,t=0,ts=0;
	r=rand()%100;
	printf("Tahmin Et =>");
	scanf("%d",&t);
	while(t>101)
	{
		printf("Sayiniz 100'den buyuk lutfen tekrar tahmin ediniz =>");
		scanf("%d",&t);
	}
		while(r!=t)
		{
			if(t<r)
			{
				printf("Sayiniz kucuk\n");
				ts++;
			}
			else
			{
			 printf("Sayiniz buyuk\n");
			 ts++;
			} 
			printf("Tahmin Et =>");
			scanf("%d",&t);
		}
	printf("!!! Tebrikler Bildiniz !!!\n%d tahminde bulundunuz.",ts);
	
}
