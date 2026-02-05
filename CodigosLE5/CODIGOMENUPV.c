#include <stdio.h>

void resolvente(float a, float b, float c);
void vertice(float a, float b, float c);
int opcion;
float a, b, c;
int main(){
    printf("Bienvenido\n");
    printf("Selecciona una opción escribiendo su número\n");
    do{
        printf("1)Calcular raíces de una función cuadrática\n");
        printf("2)Calcular el vértice de una función cuadrática\n");
        printf("3)Salir del programa\n");
        scanf("%d", &opcion);

        if (opcion<1||opcion>3){
            printf("Ingrese una opción válida\n");
        }
    }while(opcion<1||opcion>3);
    if(opcion!=3){
        printf("Ingrese el valor de A");
        scanf("%f", &a);
        printf("Ingrese el valor de B");
        scanf("%f", &b);
        printf("Ingrese el valor de C");
        scanf("%f", &c);
        switch (opcion) {
            case 1:
                resolvente(a, b, c);
            break;
            case 2:
                vertice(a, b, c);
            break;
        }
    }
    return 0;
}

void vertice(float a, float b, float c){
    float xv, yv;
    xv=-b/(2*a);
    yv=a*(xv*xv)+b*xv+c;
    printf("su vertice es: (%.1f , %.1f)\n", xv, yv);
}

void resolvente(float a, float b, float c){
    float discriminante, x1, x2;

    if (a==0){
        printf("No es una función cuadrática (a no puede ser 0)\n");
        return;
    }

    discriminante=b*b-4*a*c;

    // raiz cuadrada usando método de aproximación de Newton
    float raizDisc=discriminante;
    if (discriminante>=0){
        float aprox=discriminante/2.;
        for (int i = 0; i < 20; i++) {
            aprox=(aprox+discriminante/aprox)/2.;
         }
        raizDisc=aprox;
    }
    if (discriminante<0){
        printf("No tiene raíces reales\n");
    } else if(discriminante==0){
        x1= -b/(2*a);
        printf("Raíces iguales: x1=x2 = %.1f\n", x1);
    } else{
        x1=(-b+raizDisc)/(2*a);
        x2=(-b-raizDisc)/(2*a);
        printf("Sus raíces son \n");
        printf("x1= %.1f\n", x1);
        printf("x2= %.1f\n", x2);
    }
}

