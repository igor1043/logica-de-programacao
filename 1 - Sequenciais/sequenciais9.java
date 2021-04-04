//Faça um programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.
//C = (5 * (F-32) / 9)

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/

import java.util.Scanner;

public class sequenciais9 {

  public static void main(String[] args) {
    System.out.println("Digite uma temperatura, em Farenheit: ");
    float farenheit = new Scanner(System.in).nextFloat();
    double celsius = (5 * (farenheit - 32)) / 9;
    System.out.printf("A temperatura, em Celsius, eh de: %.2f °C", celsius);
  }

}
