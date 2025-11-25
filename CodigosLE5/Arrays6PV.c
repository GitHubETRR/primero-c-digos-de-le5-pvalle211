#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
void CargaVector(int v[]);
void InvertirVector(int v[],int inv[]);
void MostrarVector(int v[]);

int main(){
    int vec[TAM],vecInv[TAM];
    srand(time(NULL));

    CargaVector(vec);
    InvertirVector(vec,vecInv);

    printf("Vector original:\n");
    MostrarVector(vec);

    printf("Vector invertido:\n");
    MostrarVector(vecInv);

    return 0;
}

void CargaVector(int v[]){
    int i;
    for(i=0;i<TAM;i++){
        v[i]=20+rand()%71; //20 a 90
    }
}

void InvertirVector(int v[],int inv[]){
    int i,j=TAM-1;
    for(i=0;i<TAM;i++){
        inv[i]=v[j];
        j--;
    }
}

void MostrarVector(int v[]){
    int i;
    for(i=0;i<TAM;i++){
        printf("%d-",v[i]);
    }
    printf("\n");
}