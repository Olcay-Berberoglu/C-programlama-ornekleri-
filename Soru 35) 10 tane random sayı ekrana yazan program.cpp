#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
main()
{
	// 10 tane random say� ekrana yazan program
	
	srand(time(NULL));//Her saniye i�in farkl� random say� al�r.
	
	int r,a[10];
	for(int i=0;i<10;i++)
	{
		
		r=rand()%100/10;
		a[i]=r;
	}
	for(int q=0;q<10;q++)printf("%d\n",a[q]);
	
	
	getch();
}
