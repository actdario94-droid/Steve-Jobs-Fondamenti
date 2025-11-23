#include <stdio.h>
 void somma(int *a,int *b,int *risultato){
 	printf("\n%p",(void*)&risultato);
 	*risultato=*a+*b;
 	
 }
 int main(){
	int a;
	int b;
	int risultato;
  	printf("\nValore di a e':"); 
	  scanf("%d",&a);	
  	printf("\nValore di b e' :");
  	 scanf("%d",&b);
  	 somma(&a,&b,&risultato);
  	printf("\nIl valore di a e b e' :%d", risultato);
  	printf("\n\n%p",(void*)&a);
  	printf("\n\n%p",(void*)&b);
 }
