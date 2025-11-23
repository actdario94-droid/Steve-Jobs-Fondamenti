#include<stdio.h>
#include<string.h>
#define DIM 20

void leggiStringa (char str[], int dim) {
    fgets(str, dim, stdin);
    if (str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    else
        while (getchar()!='\n');
}

int main(){
  char username[DIM];
  char password[DIM];
  char mail[DIM];
  char nome[DIM];
  char cognome[DIM];


  printf("password  : ");
  leggiStringa(password, DIM);
  
  printf("username  : ");
  leggiStringa(username, DIM);

  printf("mail  : ");
  leggiStringa(mail, DIM);

  printf("nome  : ");
  leggiStringa(nome, DIM);

  printf("cognome  : ");
  leggiStringa(cognome, DIM);

  printf("username = %s\n", username);
  printf("lunghezza username = %d\n", strlen(username));
  
  printf("password = %s\n", password);
  printf("lunghezza password = %d\n", strlen(password));

  printf("mail = %s\n", mail);
  printf("lunghezza mail = %d\n", strlen(mail)); 
  
  printf("nome = %s\n", nome);
  printf("lunghezza nome = %d\n", strlen(nome));

  printf("cognome = %s\n", cognome);
  printf("lunghezza cognome = %d\n", strlen(cognome));
  return 0;
}