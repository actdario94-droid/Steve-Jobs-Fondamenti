#include <stdio.h>

int main () {
    int x;
    int *p=&x;
    printf("%p", (void*)&x);  // STAMPA L'INDIRIZZO DELLA VARIABILE X
    printf("%p", (void*)p);  // STAMPA L'INDIRIZZO DELLA CELLA SEGNATA AL PUNTATORE p

}