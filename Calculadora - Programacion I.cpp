#include <iostream>

float suma(float valor1, float valor2) {
    return valor1 + valor2;
}

float resta(float valor1, float valor2) {
    return valor1 - valor2;
}

float multiplicacion(float valor1, float valor2) {
    return valor1 * valor2;
}

float division(float valor1, float valor2) {
    if (valor2 != 0) {
        return valor1 / valor2;
    } else {
        std::cout << "Error: No se puede dividir por cero." << std::endl;
        return 0;
    }
}

int main() {
    float valor1, valor2, resultado;
    
    std::cout << "Ingrese el primer valor: ";
    std::cin >> valor1;
    
    std::cout << "Ingrese el segundo valor: ";
    std::cin >> valor2;

    resultado = suma(valor1, valor2);
    std::cout << "Suma: " << resultado << std::endl;

    resultado = resta(valor1, valor2);
    std::cout << "Resta: " << resultado << std::endl;

    resultado = multiplicacion(valor1, valor2);
    std::cout << "Multiplicacion: " << resultado << std::endl;

    resultado = division(valor1, valor2);
    std::cout << "Division: " << resultado << std::endl;

    return 0;
}
