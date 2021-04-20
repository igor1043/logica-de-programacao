#Escreva um programa que leia dois nomes e mostre o que contém maior quantidade de caracteres.

# Author:  Igor Vinicius Freitas de Souza
# GitHub: https://github.com/igor1043
# E-mail: igorviniciusfreitasouza@gmail.com

nome1 = gets.chomp
nome2 = gets.chomp
if (nome1.length >= nome2.length)
	puts nome1
else
	puts nome2
end
