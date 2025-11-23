#include <stdio.h>

int main () {
    int arrayA[]={2,5,4,4,7,8};
    int arrayB[]={0,0,0,0,0,0};
    int i, j, k;
    int isPresent = 0;
        
    printf("--- 1' vettore ---");
    for (i=0; i<5; i++) {
        printf("Array A[%d]: %d\n", i, arrayA[i]);
        } 
    for (i=0; i<5; i++) {
        printf("Array B[%d]: %d\n", i, arrayB[i]);
    }

     for(i=0; i<5;i++) {
        for(j=0 ; j<5; j++) {
            if(arrayA[i]==arrayB[j]){
                isPresent = 1;
                break; //se lo trova si ferma
                //Se incontro un duplicato segno nel flag is present;
            //SCARTARE
            }
            if(!isPresent){
                //se non è presente lo inserisco nel nuovo array
                arrayB[k]=arrayA[i];
                k++;
            }
            
            // INSERISCO    ;
            }
            printf("--- 2° vettore senza duplicati ---\n");

        }
     }