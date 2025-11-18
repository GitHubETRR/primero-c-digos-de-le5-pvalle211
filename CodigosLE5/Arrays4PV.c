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
		vec[i]=10+rand()%31;
	}

	encontrarMaxMin(vec,&max,&min);

	printf("max=%d\nmin=%d\n",max,min);

	mostrarPosMax(vec,max);
	return 0;
}

void encontrarMaxMin(int v[],int *max,int *min){
	int i;
	*max=v[0];
	*min=v[0];
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

