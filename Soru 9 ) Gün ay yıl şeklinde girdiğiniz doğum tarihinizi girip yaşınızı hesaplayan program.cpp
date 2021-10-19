#include <stdio.h>
#include <conio.h>

// Gün ay yýl þeklinde girdiðiniz doðum tarihinizi girip yaþýnýzý hesaplayan program
main()
{
	int gun,dt,y,g,a;
	gun=31122021;
	while(true)
	{
		
		printf("Gun-Ay-Yil seklinde arada bosluk birakmadan dogum yilinizi giriniz orn:24121999\nDogum yiliniz => ");
		scanf("%d",&dt);
		y=dt%10000;
		a=(dt%1000000)/10000;
		g=dt/1000000;
		if(g<=31&&g>=1)
		{
			if(a<=12&&a>=1)
			{
				if(y<2021&&y>=1900)
				{
					break;
				}		
			}
		}
		
	}
	
	printf("Yasiniz => %d",(gun-dt)%100);getch();
}
