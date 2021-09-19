#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char l1, l2, l3;  
    
    printf("Digite três letras: ");
    scanf("%c %c %c", &l1, &l2, &l3);
    
    printf("Combinação 1: %c%c%c", l1, l2, l3);  
    
    printf("\n\n");
      
}
