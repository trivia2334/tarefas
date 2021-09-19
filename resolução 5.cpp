#include <stdio.h>
#include <math.h>

int main() {
    
    int x, y;
    double raiz, potencia;

    printf("Digite dois valores: ");
    scanf("%i %i", &x, &y);

    potencia = pow(y, x);
    raiz = sqrt(potencia);
    // result = sqrt(pow(y, x));

    printf("- Raiz: %.1lf", raiz);

    printf("\n\n");
    return 0;
}
