#include <stdio.h>
#include <conio.h>

// 1 ile 10 aras�ndaki say�lar� toplayan program

main()
{
	int y=0;
	for(int i =1;i<11;i++)
	{
		y=y+i;
	}
	printf("Toplami => %d",y);
	getch();
}
