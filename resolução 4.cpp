#include <stdio.h>

int main() {

	int num, c, d, u, soma;

	printf("Digite um numero (3 dígitos): ");
	scanf("%i", &num);

	c = num/100;
	d = (num%100)/10;
	u = (num%100)%10;
	soma = c + d + u;

	printf("Soma: %i + %i + %i = %i\n\n", c, d, u, soma);




	int num1, c1, d1, u1, soma1;

	printf("Digite um numero (3 dígitos): ");
	scanf("%i", &num1);

	c1 = num1/100;
	d1 = (num1%100)/10;
	u1 = (num1%100)%10;
	soma1 = c1 + d1 + u1;

	printf("Soma: %i + %i + %i = %i", c1, d1, u1, soma1);







	return 0;
}
