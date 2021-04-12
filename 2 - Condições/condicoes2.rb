#Escreva um programa que leia um número e mostre se ele é múltiplo de 7.

#Author:  Igor Vinicius Freitas de Souza
#GitHub: https://github.com/igor1043
# E-mail: igorviniciusfreitasouza@gmail.com

numero = gets.to_i
if (numero % 7 == 0)
	puts "#{numero} é múltiplo de 7."
else
	puts "#{numero} não é múltiplo de 7."
end
