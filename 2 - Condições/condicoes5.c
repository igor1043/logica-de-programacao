//Escreva um programa que leia dois números e mostre o maior.

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
  if(num1 > num2)
  {
    printf("O numero %d eh maior.", num1);
  }
  else
  {
    printf("O numero %d eh maior.", num2);
  }
  return 0;
}
