//Faça um programa que peça o raio de um círculo, calcule e mostre sua área.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

#include <stdio.h>
#include <math.h>

int main()
{
  float raio;
  double area;
  printf("Digite o raio da circunferência: \n");
  scanf("%f", &raio);
  area = M_PI * pow(raio, 2);
  printf("O valor da area eh de: %.2f", area);
  return 0;
}
