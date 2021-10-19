#include <stdio.h>
#include <conio.h>
main()
// Girilen 10 sayýnýn ortalamasýný bulan program
{
	int a,t,to,s;
	for(int i =1;i<=10;i++)
	{
		printf("%d. Sayiyi giriniz =>",i);
		scanf("%d",&a);
		t=a%2;
		if(t==1)
		{
			to++;
			s=s+a;
		}
	}
		float fs,ft;
		fs=s;ft=to;
		printf("Sayilarin ortalamasi => %2.f",fs/ft);
		getch();
}
