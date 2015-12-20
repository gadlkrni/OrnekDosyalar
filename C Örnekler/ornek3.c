#include <stdio.h>
#include <time.h>

int main(){
	
	int sonuc;
	
	char isim[25];
	
	printf(" Ad giriniz: "); scanf("%s", &isim);
	
	sonuc = strcmp(isim,"elma");
	
	if ( sonuc == 0 ){
	
		printf("Sayn %s, hs geldiniz!\n", isim);
		
	}else{
		
		printf("YANLIS");
		
	}
	
	printf("\n\n"); system("pause");
	return 0;
	
}
