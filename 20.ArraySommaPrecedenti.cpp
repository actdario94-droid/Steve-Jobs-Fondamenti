#include <stdio.h>

int main () {
	long dim;
	long i;
	
	printf("\nInserisci dimensioni array: ");
	scanf("\n%d", &dim);
	
	long a[dim];
	printf ("----Stampo il vettore----\n");
	for (i=0; i<dim; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	
	for (i=2; i<dim; i++) {
		a[dim]=a[dim-1]+a[dim-2];
		printf("\n %d \n", a[dim]);
		
	}
	
}
