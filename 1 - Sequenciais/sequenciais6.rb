#Faça um programa que peça o raio de um círculo, calcule e mostre sua área.

# Author:  Igor Vinicius Freitas de Souza
# GitHub: https://github.com/igor1043
# E-mail: igorviniciusfreitasouza@gmail.com

puts "Digite o raio da circunferência: "
raio = gets.to_f
area = (Math::PI * (raio ** 2)).round(2)
puts "A área da circunferencia é de: #{area}"
