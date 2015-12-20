#include <stdio.h>

int main(){
	
	int asayisi = 100;
	int i = 0;
	
	int sayitut[250];
	char metin1[250][250];
	char metin2[250][250];
	
	FILE *doya;
	FILE *oku;
	
	doya = fopen("yenimetin.txt", "a");
	
	fprintf(doya, "\n%d Sayisi Eklendi!", asayisi);
	
	fclose(doya);
	
	
	oku = fopen("yenimetin.txt", "r");
	
	while(!feof(oku)){
	
		fscanf(oku, "%d %s %s", &sayitut[i], &metin1[i], &metin2[i]);
		
		i = i + 1;
		
	}
	
	printf("Gelenler: %d %s", sayitut[4], metin1[1]);
	
	fclose(oku);
	
	printf("\n\n"); system("pause");
	return 0;
	
}
