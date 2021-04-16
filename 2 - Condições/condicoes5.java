//Escreva um programa que leia dois números e mostre o maior.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

import java.util.Scanner;

public class condicoes5 {

  public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    System.out.println("Digite dois números: ");
    int num1 = scan.nextInt();
    int num2 = scan.nextInt();
    if (num1 > num2) {
      System.out.println("O número " + num1 + " é maior");
    } else if (num1 < num2) {
      System.out.println("O número " + num2 + " é maior");
    } else {
      System.out.println("Os números são iguais.");
    }
  }
}
