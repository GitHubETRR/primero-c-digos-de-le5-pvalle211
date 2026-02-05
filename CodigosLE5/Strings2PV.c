#include <stdio.h>
#include <string.h>
#include <ctype.h>

void pasaMinuscula(char v[]);

int main(){
    char texto[100];

    printf("ingrese un texto: ");
    scanf("%s",texto); 
    pasaMinuscula(texto);
    printf("texto en minusculas: %s\n",texto);
    return 0;
}

void pasaMinuscula(char v[]){
    int i;
    for(i=0;v[i]!=' ';i++){
        v[i]=tolower(v[i]);   //funcion de la libreria ctype
    }
}