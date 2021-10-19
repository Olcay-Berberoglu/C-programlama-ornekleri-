#include <stdio.h>
#include <math.h>
#include <conio.h>

// Ýki kenarý klavyeden girilen üçgenin üçüncü kenarýný bulan program
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
