
#include <stdio.h>






n = int(input("Digite um n�mero inteiro: "))

soma = 0

while (n > 0):

  	resto = n % 10
   	n =	(n - resto)/10
   	soma = soma + resto


print("A soma dos n�meros �: ", n)



