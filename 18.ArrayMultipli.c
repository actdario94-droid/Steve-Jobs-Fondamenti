#include <stdio.h>


int main () {
	int i, n;
	int v1[10];	
	int v2[10];
	int v3[10];
	
	for (i=0; i<10; i++) {
		printf("\nHello my friend, dammi dei valori da conservare nell'array 1: ");
		scanf("\n%d", &v1[i]);	
		
		printf("\nHello my friend, dammi dei valori da conservare nell'array 2: ");
		scanf("\n%d", &v2[i]);
	}

	for (i=0; i<10; i++) {
		printf("\nPRIMO ARRAY: %d", v1[i]);
		printf("\nSECONDO ARRAY: %d", v2[i]);
	}

	for (i=0; i<10; i++) {
		v3[i]= v1[i] + v2[i];
		printf("\n i valori dei primi due array sommati sono: %d", v3[i]);
	}
}
