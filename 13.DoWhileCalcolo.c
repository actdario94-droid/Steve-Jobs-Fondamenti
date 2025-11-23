#include<stdio.h>

int main () {
	
	int selezione;
	int primo_numero;
	int secondo_numero;
		int somma;
		int sottrazione;
		int moltiplicazione;
		int divisione;
	
	do {
		printf("\n-------MENU-------");
		printf("\n 1. SOMMA");
		printf("\n 2. DIFFERENZA");
		printf("\n 3. MOLTIPLICAZIONE");
		printf("\n 4. DIVISIONE");
		printf("\n 0. ESCI");
		printf("\n------------------");
		printf("\nSeleziona il calcolo desiderato: ");
		scanf("\n%d", &selezione);
		
		if (selezione==1) {
			printf("\nSeleziona i numeri da SOMMARE, indica il primo numero:");
			scanf("\n%d", &primo_numero);
			printf("\nIndica il secondo numero da sommare: ");
			scanf("\n%d", &secondo_numero);
			somma = primo_numero + secondo_numero;
			printf("La somma e: %d", somma);
		} else if (selezione==2) {
			printf("\nSeleziona i numeri della DIFFERENZA, indica il primo numero:");
			scanf("\n%d", &primo_numero);
			printf("\nIndica il secondo numero da sottrarre: ");
			scanf("\n%d", &secondo_numero);
			sottrazione = primo_numero - secondo_numero;
			printf("La sottrazione e': %d", sottrazione);
		} else if (selezione==3) {
			printf("\nSeleziona i numeri della MOLTIPLICAZIONE, indica il primo numero:");
			scanf("\n%d", &primo_numero);
			printf("\nIndica il secondo numero per cui moltiplicare: ");
			scanf("\n%d", &secondo_numero);
			moltiplicazione = primo_numero * secondo_numero;
			printf("La moltiplicazione e': %d", moltiplicazione);
		} else if (selezione==4) {
			printf("\nSeleziona i numeri della DIVISIONE, indica il primo numero:");
			scanf("\n%d", &primo_numero);
			printf("\nIndica il secondo numero per cui dividere: ");
			scanf("\n%d", &secondo_numero);
			divisione = primo_numero / secondo_numero;
			printf("La divisione e': %d", divisione);
		}
	} while(selezione!=0);
}
