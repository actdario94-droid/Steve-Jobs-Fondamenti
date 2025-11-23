#include<stdio.h>

int voto;
int voto_max = 10;
int voto_min = 0;

int main () {
	while(voto<voto_max || voto>voto_min) {
		
	printf("\n Inserisci il voto: ");
	scanf("%d", &voto);	
		
		while (voto>voto_max || voto<voto_min) {
		printf("Valore non valido, deve essere compreso da 0 a 10.\n");
		break;
	} 
		
		if (voto <=6) {
		printf("Bocciato\n");
	} else {
		printf("Promosso\n");
	}
	
	}

	
}
