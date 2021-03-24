#Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula:
#(72.7 * altura) - 58.

# Author:  Igor Vinicius Freitas de Souza
# GitHub: https://github.com/igor1043
# E-mail: igorviniciusfreitasouza@gmail.com

puts "Digite sua altura: "
altura = gets.to_f
pesoideal = (72.7 * altura) - 58
puts "O seu peso ideal deve ser: #{pesoideal}"
