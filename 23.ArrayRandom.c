#include <stdio.h>
#include <stdlib.h>

// Creare un array di numeri casuali;

int main() {
	int a[6];
	int i;

	
	for(i=0; i<6; i++) {
		a[i]=rand();

		printf("%d\n", a[i]);	
	}
}
