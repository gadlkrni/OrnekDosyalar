#include <stdio.h>
#include <time.h>

#define diziBoyut 20

void sayiAta(int *);
void sirala(int *);
void enbuyuk(int *);
void enkucuk(int *);

int main(){
	
	int sayilar[diziBoyut];
	int i;
	
	sayiAta(sayilar);
	
	for ( i = 0; i < diziBoyut; i++ ){
		
		printf("\n %d. Sayi: %d", i+1, sayilar[i]);
		
	}
	
	enbuyuk(sayilar);
	
	enkucuk(sayilar);
	
	sirala(sayilar);
	
	printf("\n\n");
	
	for ( i = 0; i < diziBoyut; i++ ){
		
		printf("\n %d. Sayi: %d", i+1, sayilar[i]);
		
	}
	
	printf("\n\n"); system("pause");
	return 0;
	
}

void sayiAta(int *sayilar){
	
	srand(time(0));
	
	int i;
	
	for ( i = 0; i < diziBoyut; i++ ){
		
		sayilar[i] = rand() % 100;
		
	}
	
}

void sirala(int *sayilar){
	
	int i, j, temp;

	for ( i = 1; i < diziBoyut; i++ ){
		
		for ( j = 0; j < diziBoyut - i; j++ ){
			
			if ( sayilar[j] > sayilar[j + 1] ){
				
				temp = sayilar[j];
				
				sayilar[j] = sayilar[j + 1];
				
				sayilar[j + 1] = temp;
				
			}
			
		}
		
	}
	
}

void enbuyuk(int *sayilar){
	
	int maxs = 0, i;
	
	for ( i = 0; i < diziBoyut; i++ ){
	
		if ( sayilar[i] > maxs ){
			
			maxs = sayilar[i];
			
		}
		
	}
	
	printf("\n\n EN BUYUK SAYI: %d", maxs);
	
}

void enkucuk(int *sayilar){
	
	int mins = 100, i;
	
	for ( i = 0; i < diziBoyut; i++ ){
	
		if ( mins > sayilar[i] ){
			
			mins = sayilar[i];
			
		}
		
	}
	
	printf("\n\n EN KUCUK SAYI: %d", mins);
	
}





