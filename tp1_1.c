#include<stdio.h>

int main() {

    printf("Hola mundo\n");

    int num=22, *punt;

    punt = &num;

    printf("Contenido del puntero: %d\n", *punt);
    printf("Dirección de memoria almacenada por el puntero: %d\n", punt);
    printf("Dirección de memoria de la variable: %d\n", &num);
    printf("Dirección de memoria del puntero: %d\n", &punt);
    printf("Tamaño de memoria utilizado por la memoria: %d\n", sizeof(num));

    return 0;
}