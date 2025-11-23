#include <stdio.h>

/*

void incrementa (int n) {
    n++;
    printf("la copia di x e' %d\n", n);
}


 SBAGLIANDO NON PRENDIAMO L'INDIRIZZO GIUSTO
int main () {
    int x = 5;
    incrementa(x);
    printf("il valore di x e' = %d", x);
}
*/



// CON QUESTA ALTERNATIVA L'INCREMENTO E' GIUSTO PERCHE' ANDIAMO A FARE RIFERIMENTo

void incrementa (int *n) {
    *n = *n+1;
    printf("N contiene l'indirizzo di x: %p\n", (void*)n);  //  N è il contenuto
    printf("invece l'indirizzo di N e': %p\n", (void*)&n);  // &N è l'indirizzo  
                        // della cella di memoria della variabile del contenuto 
}


int main () {
    int x = 5;
    incrementa(&x); // & serve per accedere all'indirizzo di memoria di quella
                    // specifica variabile
    printf("il valore di x e' = %d", x);

}