#include <stdio.h>
#include <string.h>

void Invertir(char v[],char inv[]);

int main(){
    char texto[100],invertida[100];
    printf("ingrese un texto: ");
    scanf("%s",texto);
    Invertir(texto,invertida);
    printf("texto invertido: %s\n",invertida);
    return 0;
}

void Invertir(char v[],char inv[]){
    int i,j;
    j=strlen(v)-1;
    for(i=0;j>=0;i++){
        inv[i]=v[j];   //i aumenta a la vez que j retrocede, e intercambian posiciones
        j--;   
    }
    inv[i]='\0';   
}
