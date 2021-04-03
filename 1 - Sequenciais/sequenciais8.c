//Faça um programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
//Calcule e mostre o total do seu salário no referido mês.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

#include <stdio.h>

int main()
{
  int horastrabalhadas, quantidadededias;
  float valordahora;
  printf("Qual o valor da sua hora de trabalho?\n");
  scanf("%f", &valordahora);
  printf("Quantas horas voce trabalha por dia?\n");
  scanf("%d", &horastrabalhadas);
  quantidadededias = 22; //estimativa de dias úteis em um mês
  printf("O seu salario no mes eh de: %.2f", (valordahora * horastrabalhadas) * quantidadededias);
  return 0;
}
