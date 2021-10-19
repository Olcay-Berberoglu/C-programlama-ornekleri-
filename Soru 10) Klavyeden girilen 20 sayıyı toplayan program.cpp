#include <stdio.h>
#include <conio.h>

// Klavyeden girilen 20 sayýyý toplayan program
main()
{
	int ct=0,c,a;
	for(int i =1;i<=20;i++)
	{
		printf("%d sayiyi giriniz =>",i);
		scanf("%d",&a);
		c=a%2;
		if(c==0)
		{
			ct=ct+a;
		}
	}
	printf("Toplami => %d",ct);getch();
}
