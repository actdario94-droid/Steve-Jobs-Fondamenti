#include<stdio.h>
#define n 5
int main() {
	int a[n]={7,5,4,10,23};
	int i;
	int somma = 0;

	for (i=0; i<n; i++) {
		printf("\nQuesto e' l'array[%d]: %d", i, a[i]);
	}
	
	printf("\nCalcolo la somma\n");
	
	for (i=0; i<n; i++) {
		somma = somma + a[i];
		
	}
	
	printf("%d Questa e' la somma", somma);
}
