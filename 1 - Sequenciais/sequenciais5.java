//Faça um programa que converta metros para centímetros

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

import java.util.Scanner;

public class sequenciais5 {

  public static void main(String[] args) {
    System.out.println("Digite um valor, em metros: ");
    int metros = new Scanner(System.in).nextInt();
    System.out.println("O valor, em centimetros, eh de: " + (metros * 100));
  }

}
