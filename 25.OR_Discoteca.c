#include <stdio.h>

int main () {
    char Gender = 'F';
    int i;
    char sex;
    int arrayEta[6]={8, 23,14,16,30,25};
    char sesso[6]={'M', 'F', 'M', 'M', 'F','F'};

    printf("---printiamo il primo vettore eta'---");
    for (i=0; i<6; i++) {
        for (sex=0; sex<6; sex++) {
        printf("Il cliente di eta' %d e' di sesso %d\n\n", arrayEta[i], sesso[sex]);
        if (Gender != 'F') {
        Gender = 'M';
        if (arrayEta[i]>=18 && sesso[sex]!='M') {
            printf("\nPuo' entrare gratuitamente");     
        } else {
            printf("\nDevi pagare 10euro");
        }
    } else {
        continue;
    }   
    }

        
    }

        

}
