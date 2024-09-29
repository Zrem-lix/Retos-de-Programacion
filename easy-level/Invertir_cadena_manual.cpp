/*
 * Crea un programa que invierta el orden de una cadena de texto
 * sin usar funciones propias del lenguaje que lo hagan de 
 * forma automática.
 * - Si le pasamos "Hola mundo" nos retornaría "odnum aloH"
 */
#include<iostream>
using namespace std;
int main() {
    string str;
    cout << "Ingrese un texto: ";
    getline(cin, str);

    int n = str.length();
    for (int i = 0; i < n/2; i++)
    {
        char temp = str[i];
        str[i] = str [n - i - 1];
        str[n -i - 1] = temp;
    }
    cout << "El texto invertido es: " << str << endl;
    return 0;
    
}