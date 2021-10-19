#include <stdio.h>
#include <conio.h>

main()
{
	// Girilen 20 sayýdan tek ve çift sayýlarýn ortalamasýný bulan program
	int a,x,cs,ct,ts,tt;
	for(int i =1;i<=20;i++)
	{
		printf("%d. Sayiyi giriniz =>",i);
		scanf("%d",&a);
		
		x=a%2;
		if(x==0)
		{
			cs++;
			ct=ct+a;
		}
		else
		{
			ts++;
			tt=tt+a;
		}
	}
	float fts,ftt,fcs,fct;
	fts=ts;
	ftt=tt;
	fcs=cs;
	fct=ct;
	printf("Tek sayilarin ortalamasi => %.2f",ftt/fts);
	printf("\nCift sayilarin ortalamasi => %.2f",fct/fcs);
	getch();
}
