#include <stdio.h>
#include <stdlib.h>
int main(){
	
	// Vize ve final notu hesaplayan program
	
	int vize,final,ort=0;
	char devam_mi;
do{
	
	 vi:
		printf("VÝZE NOTUNU GÝRÝNÝZ =  ");
	   scanf("%d",& vize);
	if(vize < 0 ||vize > 100){
	printf("vize notunu tekrar gir \n");
	goto vi;
	}
	
	fi:
    printf("FÝNAL NOTUNU GÝRÝNÝZ = ");
    scanf("%d",& final);
    if(final < 0 ||final > 100){
	printf("final notunu tekrar gir \n");
	goto fi;
	}
	
	ort=(vize*0.4)+(final*0.6);
	printf("Ortalama=  %d \n",ort);
	
	do {
		printf("Devam etmek için E YADA e bas Cikmak icin Herhangi bir tusa bas ");
			scanf("%c",&devam_mi);
		}while( devam_mi == '\n' );
		printf("\n");
	} while( devam_mi == 'E' || devam_mi == 'e' );

	return 0;
		
		
}

