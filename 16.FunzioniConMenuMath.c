#include <stdio.h>

int a;
int b;

	int somma () {	
		int a, b;
		printf("\nSeleziona i numeri da SOMMARE, indica il primo numero:");
		scanf("\n%d", &a);
		printf("\nIndica il secondo numero da sommare: ");
		scanf("\n%d", &b);
		somma = a + b;
		printf("La somma e: %d", somma);
	}
	
	int sottrazione () {
		printf("\nSeleziona i numeri della DIFFERENZA, indica il primo numero:");
		scanf("\n%d", &primo_numero);
		printf("\nIndica il secondo numero da sottrarre: ");
		scanf("\n%d", &secondo_numero);
		sottrazione = primo_numero - secondo_numero;
		printf("La sottrazione e': %d", sottrazione);
	}
	
	int moltiplicazione () {
		printf("\nSeleziona i numeri della MOLTIPLICAZIONE, indica il primo numero:");
		scanf("\n%d", &primo_numero);
		printf("\nIndica il secondo numero per cui moltiplicare: ");
		scanf("\n%d", &secondo_numero);
		moltiplicazione = primo_numero * secondo_numero;
		printf("La sottrazione e': %d", moltiplicazione);
	}			
		
	int divisione () {	
		printf("\nSeleziona i numeri della DIVISIONE, indica il primo numero:");
		scanf("\n%d", &primo_numero);
		printf("\nIndica il secondo numero per cui DIVIDERE: ");
		scanf("\n%d", &secondo_numero);
		divisione = primo_numero / secondo_numero;
		printf("La sottrazione e': %d", divisione);
	}
	
	
int main () {
	int selezione;
	switch ("%d", &selezione) {
		case 0:
			break;
		case 1:
			somma;
		case 2:
			sottrazione;
		case 3:
			moltiplicazione;
		case 4:
			divisione;
	}
	}
