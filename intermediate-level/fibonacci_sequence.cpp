/*
                Descripción del reto: 
    Escribe un programa que imprima los primeros 20 
    números de la secuencia de Fibonacci.
    La secuencia de Fibonacci es una serie en la que
    cada número es la suma de los dos anteriores. 
    Los primeros dos números de la secuencia son 0 y 1.
 */

#include<iostream>
using namespace std;
int main() {
    // Inicializa las primeras dos variables de la secuencia de Fibonacci
    int n1 = 3, n2 = 1, other;

    // Imprime el encabezado para la secuencia de Fibonacci
    cout << "Secuencia de Fibonacci: ";

    // Imprime los dos primeros números de la secuencia
    cout << n1 << " " << n2 << " ";

    // Bucle que itera para generar los siguientes números en la secuencia
    for (int i = 0; i <= 20; i++)
    {
        // Calcula el siguiente número en la secuencia como la suma de los dos anteriores
        other = n1 + n2;

        // Imprime el siguiente número en la secuencia
        cout << other << " ";

        // Actualiza las variables para los siguientes cálculos
        n1 = n2;
        n2 = other;
    }

    // Imprime una nueva línea al final de la secuencia
    cout << endl;
    
    return 0; // Indica que el programa ha terminado correctamente
}
