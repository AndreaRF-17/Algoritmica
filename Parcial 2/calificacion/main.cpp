#include <iostream>
#include <conio.h>

int main()
{
    float calificacion;

    printf("Ingrese calificacion: ");

    scanf("%f", &calificacion);

    if(calificacion>6)
    {
        printf("Aprobado");
    }

    else
    {
        printf("reprobaste \a");
    }
    getch();
}
