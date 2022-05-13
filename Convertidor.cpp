#include <stdio.h>
int main(){
    float dolar = 19.20, peso, total;
    printf ("Introduzca la cantidad de pesos que quiere convertir a dolares: ");
    scanf ("%f", &peso);
    total = peso / dolar;
    printf ("En total son: %f dolares", total);
    return 0;
}