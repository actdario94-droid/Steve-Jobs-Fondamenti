#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct

	struct Persona {
	char nome[30];
	char cognome[30];
	int eta;
	};

	void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
    }
    
int main (){
	
	
	struct Persona p;
		printf("----- DATI PERSONA ----- \n");
	
		printf("inserisci il tuo nome: ");
		leggiStringa(p.nome,30);
		printf("inserisci il tuo cognome: ");
		leggiStringa(p.cognome,30);
		printf("inserisci la tua eta': ");
		scanf("%d",&p.eta);
		printf("I tuoi dati verranno usati illegalmente, alla prossima!");
		
}
