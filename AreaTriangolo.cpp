#include<stdio.h>

// %d decimale, & ampersand  attribuire il valore alla variabile //

int main() {
	
	int base;
	int altezza;
	int area;	
	
	printf("\nInserisci la base del triangolo: ");
	scanf("%d", &base);	
	printf("\nInserisci l'altezza del triangolo, poi troveremo l'area': ");
	scanf("%d", &altezza);	
	
	area = base * altezza / 2;
	printf("\n Questa e' l'area: %d ", area);
}

