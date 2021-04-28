#Faça um programa que peça uma nota, entre zero e dez.
#Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido

# Author:  Igor Vinicius Freitas de Souza
# GitHub: https://github.com/igor1043
# E-mail: igorviniciusfreitasouza@gmail.com

numero = -1

while (numero < 0 || numero > 10) do
  puts "Digite um número: "
  numero = gets.to_i
end
