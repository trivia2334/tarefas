#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Digite uma idade: ");
	scanf("%i", &idade);
	
	if(idade < 0){
		printf("Idade invalida");
	}
	
	
	
	if(idade > 120){
		
		
		printf("Idade invalida");
		
		
	} 
	
	else if (idade <= 11){
		
		printf("Crianca!");
	}
	
	else if(idade >= 12 and idade <= 17){
		
		printf("Adolescente!");
	}
	
	else if(idade >= 18 and idade <= 59){
		
		printf("Adulto!");
	}
	
	
	else if(idade >= 60){
		
		printf("Idoso!");
	}
	
	
	
	return 0;
	
}
