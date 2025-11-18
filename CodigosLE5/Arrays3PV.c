#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANO_VECTOR 50

int contarMayor(int vec[], int n);

int main(){
    int vec[TAMANO_VECTOR];
    int i;
    srand(time(NULL));

    for(i=0;i<TAMANO_VECTOR;i++){
        vec[i]=10+rand()%11;
    }

    int rep = contarMayor(vec,TAMANO_VECTOR);

    printf("el mayor se repite %d veces.\n",rep);

    return 0;
}

int contarMayor(int vec[],int n){
    int i,mayor=vec[0],cont=0;

    for(i=1;i<n;i++){
        if(vec[i]>mayor){
            mayor=vec[i];
        }
    }

    for(i=0;i<n;i++){
        if(vec[i]==mayor) cont++;
    }

    return cont;
}
