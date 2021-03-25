//Escreva um programa que leia um número real e faça o arredondamento para inteiro.
//Se a parte fracionária for maior do que 0.5 o arredondamento deve ser feito para o próximo inteiro.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/
#include <stdio.h>
#include <math.h>

int main()
{
  printf("Digite um numero fracionado: ");
  float numero;
  scanf("%f", &numero);
  numero = round(numero);
  printf("%.1f", numero);
  return 0;
}
