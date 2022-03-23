#include<stdio.h>
#include<math.h>

/* a) Haga una función que devuelva el cuadrado de un número: */
int cuadrado(int x);

/* b) Haga la función anterior, pero devolviendo un tipo void: */
void cuadradoPorReferencia(int *x);

/* c) Al recibir una variable muestre por pantalla la dirección y el contenido de la
variable: */
void mostrar(int *x);

/* d) Dado dos parámetros de entrada, deberá invertir los valores entre ambos: */
void invertir(int *a, int *b);

/* e) Dado dos parámetros de entrada, deberá devolverlos de forma ordenada, en el
primer parámetro el menor y en el segundo el mayor: */
void ordenar(int *a, int *b);

/* f) Utilice las funciones anteriores para leer pares de valores e imprimirlos por
pantalla: */
void imprimir(int *x, int *y);

int main() {

    int num = 4, *pnum, pot;
    int a = 3, b = 6;
    int x, y;

    mostrar(&num);

    pot = cuadrado(num);
    printf("Resultado usando la función con pasaje por valor: %d\n", pot);

    cuadradoPorReferencia(&num);
    printf("Resultado usando la función con pasaje por valor: %d\n", num);

    printf("Variables: a = %d ; b = %d\n", a,b);
    invertir(&a, &b);
    printf("Invertidas: a = %d ; b = %d\n", a,b);

    ordenar(&a, &b);
    printf("Parámetros ordenados: a = %d ; b = %d\n", a,b);

    printf("Ingrese el primer parámetro: x = ");
    scanf("%d", &x);
    printf("Ingrese el segundo parámetro: y = ");
    scanf("%d", &y);

    imprimir(&x, &y);

    return 0;
}

int cuadrado(int x) 
{
    return pow(x,2);
}

void cuadradoPorReferencia(int *x) 
{
    *x = pow(*x,2);
}

void mostrar(int *x)
{
    printf("Valor variable: %d\n", *x);
    printf("Dir. en memoria: %p\n", x);
}

void invertir(int *a, int *b)
{
    int aux = *a;

    *a = *b;
    *b = aux;
}

void ordenar(int *a, int *b)
{
    int *puntA, *puntB;

    puntA = a;
    puntB = b;

    if(*a > *b) {
        invertir(puntA, puntB);
    }
}

void imprimir(int *x, int *y)
{
    int *puntX, *puntY;

    puntX = x;
    puntY = y;

    ordenar(puntX, puntY);

    printf("Parámetros ordenados: X = %d ; Y = %d", *x, *y);
}