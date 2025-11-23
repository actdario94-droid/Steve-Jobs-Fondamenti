#include <stdio.h>
#define N 5


int main() {
    int v[N];
    int max;

    printf("Inserisci i numeri: \n");
    for (int i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf(" v[N] = %d", v[N]);

/* max = v[0]; 
 if(v[N] > max) {
     max = v[N];
 }
*/

    max = v[0];
    if(v[N] > max) {
        max = v[N];
    }

    return 0;
}