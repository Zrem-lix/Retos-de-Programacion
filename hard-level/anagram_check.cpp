/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */

#include <iostream> // Incluye la librería estándar de entrada y salida
#include <string>   // Incluye la librería para manejo de cadenas de texto
#include <algorithm> // Incluye la librería para algoritmos como sort
using namespace std; // Utiliza el espacio de nombres estándar para evitar escribir "std::" antes de cada uso

// Función que ordena los caracteres de una cadena de texto
string sortedString(string str) {
    sort(str.begin(), str.end()); // Ordena la cadena en orden alfabético
    return str; // Retorna la cadena ordenada
}

// Función que verifica si dos palabras son anagramas
bool areAnagrams(string word1, string word2) {
    // Si las palabras son exactamente iguales, no son anagramas
    if (word1 == word2) {
        return false; // Retorna false si las palabras son iguales
    }
    
    // Ordena ambas palabras
    string sortedWord = sortedString(word1);
    string sortedWord2 = sortedString(word2);
    
    // Compara las palabras ordenadas
    return sortedWord == sortedWord2; // Retorna true si las palabras ordenadas son iguales, false en caso contrario
}

int main() {
    string word1, word2;
    
    // Solicita al usuario que ingrese la primera palabra
    cout << "Ingrese una palabra: ";
    cin >> word1;
    
    // Solicita al usuario que ingrese la segunda palabra
    cout << "Ingrese otra palabra: ";
    cin >> word2;

    // Verifica si las palabras son anagramas y muestra el resultado
    if (areAnagrams(word1, word2)) {
        cout << "True" << endl; // Imprime "True" si las palabras son anagramas
    } else {
        cout << "False" << endl; // Imprime "False" si las palabras no son anagramas
    }
    
    return 0; // Indica que el programa ha terminado correctamente
}
