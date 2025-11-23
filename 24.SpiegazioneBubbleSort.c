#include <stdio.h>
#include <stdlib.h>
//time.h � la libreria per usare srand(time(Null) he indica il tempo attuale)
#include <time.h>
#define N 6


int main() {
    int min = 1;
    int max = 100;
    int a[N];
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < N - 1; k++) {
			if(a[k] > a[k+1]) {
				int temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
		}
	}
    printf("Array ordinato: \n");

/*    for (int i = 0; i < N; i++) {
        a[i] = rand() % 100; // Numeri casuali tra 0 e 99
        printf("%d \n", a[i]);
        }   QUESTO PER INIZIALIZZARE L'ARRAY CON VALORI RANDOM ALTERNATIVAMENTE A QUELLO SOTTO
*/

    printf("---- Valori random ----\n");
    for(int i=0; i<N; i++) {
        a[i]=rand()%(max-min+1)+min;
        printf("a[%d] = %d\n", i, a[i]);
    }
    for (int i = 0; i < N-1; i++) {
        for (int j=0; j < N-1; j++) {
            // questo confronto serve per ordinare l'array
            // se l'elemento attuale e' maggiore del successivo li scambia,
            // questi due cicli for annidati rappresentano l'algoritmo di ordinamento Bubble Sort
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }

    }
}