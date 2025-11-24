#include <stdio.h>

int main() {
    int n;
    int quantita = 0;
    int somma = 0;
    int max, min;
    int pari = 0;
	int dispari = 0;
    float media;

    printf("Inserisci numeri nell'array a piacimento, poi termina con 0 \n Inserisci il primo valore: ");
    scanf("%d", &n);
    max = n;
    min = n;
	
    do{
        quantita++;
        somma += n;
        if (n % 2 == 0){
			pari++;
			}else{
			dispari++;
		}
        
		if (n > max)
            max = n;
        if (n < min)
            min = n;
            
    	printf("Inserisci il numero seguente: ");
    	scanf("%d", &n);
    	int check_input;

    do {
        printf("Inserisci il numero seguente: ");
        check_input = scanf("%d", &n);

        if (check_input != 1) {
            printf("ERRORE: Input non valido. Devi inserire solo numeri interi. Riprova.\n");
            while (getchar() != '\n' && !feof(stdin));  //comando suggerito
            
        } else if (n == 0) {
            printf("Valore 0 inserito. Uscita.\n");
        }

    } while (check_input != 1 && n != 0); 
    } while(n!=0);
    
    media = (float)somma / quantita;

    printf("\n--- VALORI DI USCITA ---\n");
    printf("I numeri da te inseriti sono: %d\n", quantita);
    printf("SOMMA: %d\n", somma);
    printf("MEDIA: %.2f\n", media);
    printf("Il valore max=%d e il valore min=%d\n", max,min);
    printf("I numeri pari sono %d e i numeri dispari sono %d\n", pari,dispari);

    return 0;
}
