#include <stdio.h>

// %d decimale, & ampersand  attribuire la variabile a "voto" //

int main() {
	
	int voto;
	
	printf("\n Inserisci il voto: ");
	scanf("%d", &voto);	
	if (voto <=6 ) {
		printf("Bocciato");
	} else {
		printf("Promosso");
	}
}
