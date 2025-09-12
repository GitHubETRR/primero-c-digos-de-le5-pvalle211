
#include <stdio.h>

int main()
{
    int dia, mes, anio;
    int diac, mesc, anioc;
    int edad;

    printf("Ingrese el día actual:\n");
    scanf("%d", &dia);

    printf("Ingrese el mes actual:\n");
    scanf("%d", &mes);

    printf("Ingrese el año actual:\n");
     scanf("%d", &anio);

    printf("Ingrese el día en el que naciste:\n");
    scanf("%d", &diac);

    printf("Ingrese el mes en el que naciste:\n");
    scanf("%d", &mesc);

    printf("Ingrese el año en el que naciste:\n");
        scanf("%d", &anioc);

    edad=anio-anioc;

 if (mes>mesc) {
        printf("Usted tiene %d años.\n", edad);
   } else if (mes==mesc && dia>=diac) {
        printf("Usted tiene %d años.\n", edad);
   } else {
        edad=edad-1;
        printf("Usted tiene %d años.\n", edad);
    }

    return 0;
}