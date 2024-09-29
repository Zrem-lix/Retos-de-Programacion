/*
 * Escribe una función que calcule si un número dado es 
 * un número de Armstrong (o también llamado narcisista).
 * Si no conoces qué es un número de Armstrong,
 * debes buscar información al respecto.
 */
#include<iostream>
using namespace std;

int main() {
    int num, sum = 0, temp, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp/10;
    } if (sum == num)
    {
       printf("%d is an Armstrong number. ", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }

    return 0;
}