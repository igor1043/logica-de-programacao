//Escreva um programa que leia dois nomes e mostre o que contém maior quantidade de caracteres.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/
#include <stdio.h>
#include <string.h>

int main() {
  char nome1[4];
  char nome2[4];
  printf("Digite dois nomes: \n");
  scanf("%s", &nome1);
  scanf("%s", &nome2);
  printf("O primeiro nome tem %d letras.\n", strlen(nome1));
  printf("O segundo nome tem %d letras.\n", strlen(nome2));
  return 0;
}
