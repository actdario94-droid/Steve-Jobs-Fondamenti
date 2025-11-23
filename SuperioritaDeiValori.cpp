#include <stdio.h>

// scanf <--- 


int main () {
	int a;
	int b;
	
	printf("\n Spara un numero: ", b);
	scanf("%d", &a);
	printf("\n Spara un altro numero: ", a);
	scanf("%d", &b);
	
	if (a < b) {
		printf("\n Bene il numero %d e' inferiore a %d", a, b);
	} else if (a==b) {
		printf("\n NO VABE', sono uguali", b, a);
	} else {
		printf("\n Bene il numero %d e' inferiore a %d");
	}
}
