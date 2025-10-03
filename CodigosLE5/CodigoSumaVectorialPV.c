#include <stdio.h>
int pedirTamanoVector(void);
int suma(int n);
int main(){
    int n, resultado;
    n=pedirTamanoVector();
    resultado=suma(n); 
    printf("El resultado es %d\n", resultado);
return 0;
}
int pedirTamanoVector(void) {
int n;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);
    return n;
}

int suma(int n) {
int vector[100];
int resultado = 0;
int i;

for (i=0;i<n;i++){
        printf("ingrese el valor número %d: ", i+1);
        scanf("%d", &vector[i]);
        resultado+=vector[i];
    }
return resultado;
}
