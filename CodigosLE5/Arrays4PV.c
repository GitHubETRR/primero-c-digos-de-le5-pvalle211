#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

void encontrarMaxMin(int v[],int *max,int *min);
void mostrarPosMax(int v[],int max);

int main(){
	int vec[TAM];
	int max,min;
	int i;

	srand(time(NULL));

	for(i=0;i<TAM;i++){
		vec[i]=10+rand()%31;  //nro aleatorio entre 10 y 40
	}

	encontrarMaxMin(vec,&max,&min);

	printf("max=%d\nmin=%d\n",max,min);

	mostrarPosMax(vec,max);
	return 0;
}

void encontrarMaxMin(int v[],int *max,int *min){
	int i;
	*max=v[0];    //el * es para averiguar la direccion de la variable y no recibir solo el valor
	*min=v[0];    //asi podes devolver las 2 variables y no solo 1
	for(i=1;i<TAM;i++){
		if(v[i]>*max)*max=v[i];
		if(v[i]<*min)*min=v[i];
	}
}

void mostrarPosMax(int v[],int max){
	int i;
	printf("maximo %d en posiciones:\n",max);
	for(i=0;i<TAM;i++){
		if(v[i]==max)printf("%d ",i);
	}
	printf("\n");
}


