//Escreva um programa que leia um número e mostre se ele é positivo.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

import java.util.Scanner;

public class condicoes3 {

  public static void main(String[] args) {
    System.out.println("Digite um número: ");
    Scanner scan = new Scanner(System.in);
    int numero = scan.nextInt();
    if (numero >= 0) {
      System.out.println("O número é positivo");
    } else {
      System.out.println("O número não é positivo");
    }
  }
}
