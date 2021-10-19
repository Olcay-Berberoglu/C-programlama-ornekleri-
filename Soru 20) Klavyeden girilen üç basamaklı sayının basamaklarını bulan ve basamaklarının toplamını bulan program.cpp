#include <stdio.h>
#include <conio.h>
main()
{
	// Klavyeden girilen üç basamaklý sayýnýn basamaklarýný bulan ve basamaklarýnýn toplamýný bulan program
	int a,b,o,y,top;
	printf("Lutfen 3 basamakli bir sayi giriniz => ");
	scanf("%d",&a);
	y=a/100;
	b=a%10;
	o=((a-y*100)-b)/10;
	top=y+o+b;
	printf("Birler => %d\nOnlar =>%d\nYuzler =>%d\nToplamlari => %d",b,o,y,top);
	getch();
}
