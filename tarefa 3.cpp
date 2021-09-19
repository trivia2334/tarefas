#include <stdio.h>

int main() {
    
    float media, tanque, distancia;
    
    printf("Media de consumo (km/l): ");
    scanf("%f", &media);
    printf("Gasolina tanque (l): ");
    scanf("%f", &tanque);
    
    distancia = media * tanque;
    
    printf("Distancia percorrida = %.1f", distancia);
    
    printf("\n\n");
   
}
