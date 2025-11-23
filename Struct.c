#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct

	struct Persona {
	char nome[30];
	char cognome[30];
	int eta;
	char professione[15];
	};

    leggi_persona(struct Persona *p) {
    printf("Inserisci il nome: "); 
    scanf("%s", p->nome);
    printf("Inserisci il cognome: ");
    scanf("%s", p->cognome);
    printf("Inserisci l'eta: ");
    scanf("%d", &p->eta);
    printf("Inserisci la professione: ");
    scanf("%s", p->professione);
    }
    