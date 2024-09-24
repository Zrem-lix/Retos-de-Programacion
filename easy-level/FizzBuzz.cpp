/*
Escribe un programa que muestre por consola (con un print) los
números de 1 a 100 (ambos incluidos y con un salto de línea entre
cada impresión), sustituyendo los siguientes:
- Múltiplos de 3 por la palabra "fizz"
- Múltiplos de 5 por la palabra "buzz"
- Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz"
*/
#include <iostream> // Incluye la librería estándar de entrada y salida
using namespace std; // Utiliza el espacio de nombres estándar para evitar escribir "std::" antes de cada uso de las funciones de la librería estándar
int main() {
    // Bucle que itera desde 1 hasta 100
    for (int i = 1; i <= 100; i++) {
        // Si el número es divisible por 3 y 5, imprime "fizzbuzz"
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "fizzbuzz" << endl;
        }
        // Si el número es divisible solo por 3, imprime "fizz"
        else if (i % 3 == 0) {
            cout << "fizz" << endl;
        } 
        // Si el número es divisible solo por 5, imprime "buzz"
        else if (i % 5 == 0) {
            cout << "buzz" << endl;
        }  
        // Si el número no es divisible ni por 3 ni por 5, imprime el número
        else {
            cout << i << endl;
        }
    }
    return 0; // Indica que el programa ha terminado correctamente
}
