#include <stdio.h>
#include <conio.h>

// Girilen 10 say�dan pozitif yada negatif oldu�unu bulan program
main()
{
	int a;
	for(int i =1;i<=10;i++)
	{
		
		printf("%d. Sayiyi giriniz => ",i);
		scanf("%d",&a);
		
		if(a>=0)
		{
			printf("Sayiniz Pozitif\n");
		}
		else
		{
			printf("Sayiniz Negatif\n");
		}
	}getch();
}
