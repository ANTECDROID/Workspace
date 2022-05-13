#include<stdio.h>
int main(){
    int n, menor, posrel, posrelmenor;
    scanf("%d", &n);
    mayor = n;
    while (n!=0)
    {
        if ( n > mayor){
            mayor = n;
        }
        n = mayor;
    }
    
    return 0;
}

//Determinar el menor valor de un conjutno de numeros y tambien indicar su posicion relativa dentro del mismo/