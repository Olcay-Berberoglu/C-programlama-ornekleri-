#include <stdio.h>
#include <conio.h>
main()
{
	// 1 ile 10 aras�ndaki say�lar�n �arp�mlar� toplam�n� bulan program
	int y=0;
	for(int i =0;i<11;i++)
	{
		y=y+(i*i*i);
	}
	printf("Toplamlari => %d",y);
	getch();
}
