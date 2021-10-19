#include <stdio.h>
#include <conio.h> 
int main(){
	
	// ASCII SIRASI ÝLE BÜYÜK VE KÜÇÜK HARFLERÝ EKRANA YAZDIRAN PROGRAM
 
          printf(" BUYUK HARFLER \n");
    for(int i=65; i<91; i++)
        printf("%d = %c\n", i, i);
        
        printf("\n");
         printf(" KUCUK HARFLER \n");
         for(int i=97; i<123; i++)
        printf("%d = %c\n", i, i);
    
     
    return 0; 
}
