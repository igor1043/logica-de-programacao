#Faça um programa que leia 5 números e informe o maior número.

# Author:  Igor Vinicius Freitas de Souza
# GitHub: https://github.com/igor1043
# E-mail: igorviniciusfreitasouza@gmail.com

maior = 0
for i in 1..5 do
  num = gets.to_i
  maior = num if num > maior
end
puts "O maior dos cinco números é: #{maior}"
