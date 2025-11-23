#include <stdio.h>

int main () {
	
	int primo_numero;
	int secondo_numero;
		int moltiplicazione;
		int somma;
		int divisione;
		int sottrazione;
		int selezione;
	
			printf("\n-------MENU-------");
		printf("\n 1. SOMMA");
		printf("\n 2. DIFFERENZA");
		printf("\n 3. MOLTIPLICAZIONE");
		printf("\n 4. DIVISIONE");
		printf("\n 0. ESCI");
		printf("\n------------------");
		printf("\nSeleziona il calcolo desiderato: ");
		scanf("\n%d", &selezione);
	
		switch ("%d", selezione) {
			case 1:
				printf("\nSeleziona i numeri da SOMMARE, indica il primo numero:");
				scanf("\n%d", &primo_numero);
				printf("\nIndica il secondo numero da sommare: ");
				scanf("\n%d", &secondo_numero);
				somma = primo_numero + secondo_numero;
				printf("La somma e: %d", somma);
			case 2:
				printf("\nSeleziona i numeri della DIFFERENZA, indica il primo numero:");
				scanf("\n%d", &primo_numero);
				printf("\nIndica il secondo numero da sottrarre: ");
				scanf("\n%d", &secondo_numero);
				sottrazione = primo_numero - secondo_numero;
				printf("La sottrazione e': %d", sottrazione);
			case 3:
				printf("\nSeleziona i numeri della MOLTIPLICAZIONE, indica il primo numero:");
				scanf("\n%d", &primo_numero);
				printf("\nIndica il secondo numero per cui moltiplicare: ");
				scanf("\n%d", &secondo_numero);
				moltiplicazione = primo_numero * secondo_numero;
				printf("La sottrazione e': %d", moltiplicazione);
			case 4:
				printf("\nSeleziona i numeri della DIVISIONE, indica il primo numero:");
				scanf("\n%d", &primo_numero);
				printf("\nIndica il secondo numero per cui DIVIDERE: ");
				scanf("\n%d", &secondo_numero);
				divisione = primo_numero / secondo_numero;
				printf("La sottrazione e': %d", divisione);
			case 0:
				printf("Bye bye");
		break;
				 
		default: printf("\nChe spacchio scrivi");
				
		}
}
