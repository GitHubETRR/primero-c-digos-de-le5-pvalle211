#include <stdio.h>
#include <string.h>

int Dimension(char cad[]);

int main(){
    char texto[100];
    int largo;

    printf("Ingrese un texto: ");
    scanf("%s",texto);    // cuenta hasta el primer espacio :(

    largo=Dimension(texto);

    printf("El largo del texto es: %d\n",largo);

    return 0;
}

int Dimension(char cad[]){
    return strlen(cad);  //funcion para obtener el largo de la cadena
}