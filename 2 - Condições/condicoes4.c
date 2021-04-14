//Escreva um programa que leia dois números e informe se eles são iguais.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

#include <stdio.h>

int main()
{
  int num1, num2;
  scanf("%d %d", &num1, &num2);
  if (num1 == num2)
  {
    printf("Os numeros sao iguais.");
  }
  else
  {
    printf("Os numeros sao diferentes.");
  }
  return 0;
}
