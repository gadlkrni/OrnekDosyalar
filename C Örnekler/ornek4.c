#include <stdio.h>
#include <time.h>

int main(){
	
	struct tarih {
		int gun, yil, ay;
	} dogum[10];
	
	int i;
	
	for ( i = 1; i < 10; i++ ){
	
		printf("Doum ayi yeniden girin: "); scanf("%d", &dogum[i].ay);
	
	}
	
	for ( i = 1; i < 10; i++ ){
	
		printf("Doum ayi girildi: %d", dogum[i].ay);
	
	}
	
	printf("\n\n"); system("pause");
	return 0;
	
}
