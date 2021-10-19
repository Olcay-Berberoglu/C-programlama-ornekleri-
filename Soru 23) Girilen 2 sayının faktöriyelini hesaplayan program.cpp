#include <stdio.h>
#include <conio.h>

// Girilen 2 sayýnýn faktöriyelini hesaplayan program
main()
{
	int i=1,a=0;
	for(i;i <=2;i++)
	{
		int q=1,x=1;
		printf("%d. Sayi =>",i);scanf("%d",&a);
		for(q;q<=a;q++)
		{
			x=x*q;
		}
		printf("%d! Faktoriyel => %d\n",a,x);
	}getch();
}
