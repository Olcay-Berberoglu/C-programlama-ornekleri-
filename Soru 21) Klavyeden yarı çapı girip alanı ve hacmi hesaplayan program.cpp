#include <stdio.h>
#include <conio.h>
main()
{
	// Klavyeden yarý çapý girip alaný ve hacmi hesaplayan program
	
	int a=0,s=0,h=0,x=0;
	printf("Lutfen  yaricapini girin =>");scanf("%d",&s);
	x=s*2;
	a=s*s;
	h=s*s*s;
	printf(" Alani=> %d\n Hacmi => %d",a,h);
	getch();
}
