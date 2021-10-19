#include <stdio.h>
#include <conio.h>
main()
{
	// 0 girilinceye kadar girilen sayýlardan negatif olanlarýn ortalamasýný bulan program
	int a=1,ns=0,nt=0;
	while(a!=0)
	{
		printf("Sayi giriniz =>");
		scanf("%d",&a);
		
		if(a<0)
		{
			ns++;
			nt=nt+a;
		}
	}
	if(nt>=0)
	{
		printf("Sifirdan kucuk sayi girmediniz.");	
	}
	else
	{
		float fnt=nt,fns=ns;
		printf("Sayilarin ortalamasi => %.2f",fnt/fns);	
	}
	
	getch();
}
