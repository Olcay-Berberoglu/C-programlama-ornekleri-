#include <stdio.h>
#include <conio.h>
main()
{
	// 49 ile 100 aras�ndaki say�lardan kalan� 5 olan say�lar�n toplam�n� hesaplayan program
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
