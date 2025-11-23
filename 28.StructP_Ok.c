#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Persona {
    char nome[30];
    char cognome[30];
    int eta;
};

// Funzione per leggere una stringa da stdin
void leggiStringa(char str[], int dim) {
    if (fgets(str, dim, stdin) == NULL) {
        // EOF o errore
        str[0] = '\0';  // stringa vuota
        return;
    }

    // rimuove '\n' finale se presente
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    } else {
        // svuota il buffer di input
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
}

int main() {
    struct Persona p;

    printf("Inserisci nome: ");
    leggiStringa(p.nome, 30);

    printf("Inserisci cognome: ");
    leggiStringa(p.cognome, 30);

    printf("Inserisci eta: ");
    scanf("%d", &p.eta);
    // svuota il buffer dopo scanf
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // stampa per verifica
    printf("Persona inserita: %s %s, %d anni\n", p.nome, p.cognome, p.eta);

    return 0;
}

/* Windows:
premi Ctrl + Z e poi Invio.

Quando fai questo, il programma riceverà un “fine input” invece di una riga normale.
*/
