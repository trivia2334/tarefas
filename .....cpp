#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char l1, l2, l3;  
    
    printf("Digite tr�s letras: ");
    scanf("%c %c %c", &l1, &l2, &l3);
    
    printf("Combina��o 1: %c%c%c", l1, l2, l3);  
    
    printf("\n\n");
      
}
