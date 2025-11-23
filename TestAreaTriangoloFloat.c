#include<stdio.h>

int main () {
	
	float area;
	float base;
	float altezza;
	
	printf("\n Troviamo la base del triangolo, definiscine il valore: ");
	scanf("%f", &base);
	printf("\n Troviamo l'altezza, definiscine il valore: ");
	scanf("%f", &altezza);
	printf("\n GRANDIOSO! � il momento dell'area... \n");
	
	area = base * altezza / 2;
	
	printf("\n Ho calcolato tutto, l'area e'... \n %f", area);
}
