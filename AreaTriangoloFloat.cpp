#include<stdio.h>

// %f float, & ampersand  attribuire il valore alla variabile //

int main() {
	
	float base;
	float altezza;
	float area;	
	
	printf("\nInserisci la base del triangolo: ");
	scanf("%f", &base);	
	printf("\nInserisci l'altezza del triangolo, poi troveremo l'area': ");
	scanf("%f", &altezza);	
	
	area = base * altezza / 2;
	printf("\n Questa e' l'area: %f ", area);
}

