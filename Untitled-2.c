#include <stdio.h> int main() { 
    int valor, resto; 
    printf("Digite um número: "); 
    scanf("%i", &valor); resto = valor%2; 
    if(resto == 0) { printf("- PAR"); } 
    else { printf("- ÍMPAR"); }
    printf("\n\n"); return 0; 
} 