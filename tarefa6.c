#include <stdio.h>

int main() {
    float raio;
    
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    
    float area = 3.14159 * raio * raio;  // Fórmula da área do círculo: pi * raio^2
    
    printf("A área do círculo é: %.2f\n", area);
    
 
}