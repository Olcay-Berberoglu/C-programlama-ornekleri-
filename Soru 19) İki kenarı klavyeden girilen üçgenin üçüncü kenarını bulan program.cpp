#include <stdio.h>
#include <math.h>
#include <conio.h>

// �ki kenar� klavyeden girilen ��genin ���nc� kenar�n� bulan program
main()
{
	int a,s,d;
	printf("Birinici kenari =>");
	scanf("%d",&a);
	printf("Ikinci kenari =>");
	scanf("%d",&s);
	d=(a*a)+(s*s);
	d=sqrt(d);
	printf("Ucuncu kenari => %d",d);
	getch();
}
