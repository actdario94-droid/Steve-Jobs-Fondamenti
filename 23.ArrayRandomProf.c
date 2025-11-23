#include <stdio.h>
#include <stdlib.h>
//time.h � la libreria per usare srand(time(Null) he indica il tempo attuale)
#include <time.h>
#define N 6

// Creare un array di numeri casuali; da 0 a 100;

int main() {
	int a[N];
	int i;
	int max=100;
	int min=0;
	srand(time(NULL));
	
	printf("---- Valori nello stack ----\n");
	for(i=0; i<N; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	
	
	printf("------ Valori random ------ \n");
	for(i=0; i<N; i++) {
		// ALTERNATIVA a[i]=rand() % 101;
		// AGGIUNGERE  % 101 per avere valori da 0 a 100; rand()% (max-min+1)+min o +0  e cosi' mi
		a[i]=rand()%(max-min+1)+min;	
		printf("a[%d] = %d\n", i, a[i]);
	}
}

// BUBBLESORT ha una complessita' di O(n^2) nel caso peggiore e medio, e O(n) nel caso migliore (array gia' ordinato).
// QUICKSORT ha una complessita' di O(n log n) nel caso medio e migliore, ma O(n^2) nel caso peggiore (array gia' ordinato o quasi ordinato).
// MERGESORT ha una complessita' di O(n log n) in tutti i casi (migliore, medio e peggiore).
// HEAPSORT ha una complessita' di O(n log n) in tutti i casi (migliore, medio e peggiore).
// INSERTIONSORT ha una complessita' di O(n^2) nel caso peggiore e medio, e O(n) nel caso migliore (array gia' ordinato).
// SELECTIONSORT ha una complessita' di O(n^2) in tutti i casi (migliore, medio e peggiore).
// COUNTINGSORT ha una complessita' di O(n + k), dove n e' il numero di elementi nell'array e k e' il valore massimo degli elementi.