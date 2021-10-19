#include <stdio.h>
#include <conio.h>

main()
{
	// Girilen 10 sayýdan en büyük sayýyý ve hangi sýrada olduðunu bulan program
	int a,eb,ebs;
	for(int i =1;i<11;i++)
	{
		printf("%d. Sayiyi giriniz => ",i);
		scanf("%d",&a);
		
		if(a>eb)
		{
		
			eb=a;
			ebs=i;
		}
	}
	printf("En buyuk sayi => %d\nSirasi => %d",eb,ebs);
	getch();
}
