//Faça um programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.
/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

#include <stdio.h>

int main()
{
  float celsius;
  printf("Digite uma temperatura, em Celsius: ");
  scanf("%f", &celsius);
  double farenheit = 1.80 * celsius + 32;
  printf("A temperatura, em Farenheit, eh de: %.2f graus Farenheit", farenheit);
  return 0;
}
