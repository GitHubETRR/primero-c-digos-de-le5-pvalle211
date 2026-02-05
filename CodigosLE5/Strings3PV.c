#include <stdio.h>
#include <string.h>
#include <ctype.h>

void pasaMinuscula(char v[]);
int vocales(char v[]);

int main(){
    char texto[100];
    int voc;
    printf("ingrese un texto: ");
    scanf("%s",texto);
    pasaMinuscula(texto);
    voc=vocales(texto);
    printf("texto en minuscula: %s\n",texto);
    printf("cantidad de vocales: %d\n",voc);
    return 0;
}

void pasaMinuscula(char v[]){
    int i;
    for(i=0;v[i]!='\0';i++){
        v[i]=tolower(v[i]);
    }
}

int vocales(char v[]){
    int i,cont=0;
    for(i=0;v[i]!='\0';i++){
        if(v[i]=='a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'){     //si es cualquier vocal suma 1
            cont++;
        }
    }
    return cont;
}