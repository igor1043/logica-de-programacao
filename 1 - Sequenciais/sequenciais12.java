//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula:
//(72.7 * altura) - 58.

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

import java.util.Scanner;

public class sequenciais12 {

  public static void main(String[] args) {
    System.out.println("Digite sua altura: ");
    float altura = new Scanner(System.in);
    float pesoideal = (72.7 * altura) - 58.0f;
    System.out.println("O seu peso ideal deve ser: " + pesoideal);
  }

}
