#include <stdio.h>
#include <stdlib.h>

int main() {
    char giorno;    
    printf("Inserisci la lettera corrispondente al giorno della settimana: ");
    scanf("%c", &giorno);
    switch (giorno) {
        case 'l':
            printf("Giorno lavorativo selezionato Lunedì \n");
                break;
        case 'm':
            printf("Giorno lavorativo selezionato Martedì \n");
                break;
        case 'M':
            printf("Giorno lavorativo selezionato Mercoledì \n");
                break;
        case 'g':  
            printf("Giorno lavorativo selezionato Giovedì \n");
                break;
        case 'v':
            printf("Giorno lavorativo selezionato Venerdì \n");
                break;
        case 's':
            printf("Giorno lavorativo selezionato Sabato. \n");
                break;
        case 'd':
            printf("Giorno lavorativo selezionato: Domenica? Ma non si lavora! \n");
            break;
        default:
            printf("Lettera non valida. \n Devi scegliere tra: l, m, M, g, v, s, d \n");
                break;
        }
}