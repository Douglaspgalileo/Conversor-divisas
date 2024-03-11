#include <stdio.h>

// Función para convertir de quetzales a dólares
float quetzales_a_dolares(float cantidad) {
    // Supongamos una tasa de cambio de 1 GTQ = 0.13 USD
    return cantidad * 0.13;
}

// Función para convertir de quetzales a euros
float quetzales_a_euros(float cantidad) {
    // Supongamos una tasa de cambio de 1 GTQ = 0.11 EUR
    return cantidad * 0.11;
}

int main() {
    float cantidad_quetzales;
    printf("Ingrese la cantidad en quetzales: ");
    scanf("%f", &cantidad_quetzales);

    // Realizamos las conversiones
    float cantidad_dolares = quetzales_a_dolares(cantidad_quetzales);
    float cantidad_euros = quetzales_a_euros(cantidad_quetzales);

    // Mostramos los resultados
    printf("%.2f quetzales son aproximadamente:\n", cantidad_quetzales);
    printf("%.2f dólares\n", cantidad_dolares);
    printf("%.2f euros\n", cantidad_euros);

    return 0;
}

