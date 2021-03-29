//Faça um programa que peça dois números e imprima a soma.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

#include <stdio.h>

int main()
{
  int n1, n2, soma;
  printf("Digite dois numeros: \n");
  scanf("%d %d", &n1, &n2);
  soma = n1 + n2;
  printf("%d + %d = %d\n", n1, n2, soma);
  return 0;
}
