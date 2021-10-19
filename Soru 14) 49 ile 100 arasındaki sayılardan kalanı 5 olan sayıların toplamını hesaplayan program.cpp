#include <stdio.h>
#include <conio.h>
main()
{
	// 49 ile 100 arasýndaki sayýlardan kalaný 5 olan sayýlarýn toplamýný hesaplayan program
	int x=0,s=0;
	for(int i =49;i<=100;i++)
	{
		x=i%5;
		if(x==0)
		{
			s++;
		}
	}
	printf("Toplami => %d",s);
	getch();
}
