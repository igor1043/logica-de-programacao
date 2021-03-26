//Faça um programa que peça um número e então mostre a mensagem: "O número informado foi {numero}.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

import java.util.Scanner;

public class sequenciais2 {

  public static void main(String[] args) {
    System.out.println("Digite um número: ");
    Scanner s = new Scanner(System.in);
    int numero = s.nextInt();
    System.out.println("O número digitado foi: " + numero);
  }

}
