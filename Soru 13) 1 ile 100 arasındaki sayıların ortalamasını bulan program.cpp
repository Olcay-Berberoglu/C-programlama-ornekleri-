#include <stdio.h>
#include <conio.h>
main()
{
	// 1 ile 100 arasındaki sayıların ortalamasını bulan program
	int t=0,i=1;
	for(i;i<=100;i++)
	{
		t=t+i;
		
	}
	printf("Sayilarin ortalamasi => %d",t/i);
	getch();
}
