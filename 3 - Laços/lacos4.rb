#Faça um programa que leia 5 números e informe a soma e a média dos números.

# Author:  Igor Vinicius Freitas de Souza
# GitHub: https://github.com/igor1043
# E-mail: igorviniciusfreitasouza@gmail.com

soma = 0
for i in 1..5 do
  num = gets.to_i
  soma += num
end

puts "A soma dos cinco números é: #{soma}"
puts "A média dos cinco números é: #{soma / 5}"
