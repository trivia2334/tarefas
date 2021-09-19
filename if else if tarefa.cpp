#include <stdio.h>

int main()
{

	int valor;

	printf("Digite um numero inteiro: ");
	scanf("%i", &valor);

	if (valor > 0)
	{
		printf("Positivo!");
	}

	else if (valor < 0)
	{

		printf("Negativo!");
	}

	else if (valor == 0)
	{
		printf("Neutro!");
	}
}
