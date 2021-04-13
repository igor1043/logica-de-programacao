//Escreva um programa que leia um número e mostre se ele é positivo.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

#include <stdio.h>

int main()
{
  int numero;
  scanf("%d", &numero);
  if (numero >= 0)
  {
    printf("o numero %d eh positivo.", numero);
  }
  else
  {
    printf("o numero %d nao eh positivo.", numero);
  }
  return 0;
}
