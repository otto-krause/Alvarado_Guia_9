#include<stdlib.h>
#include<stdio.h>

int main()
{
    int Alumnos=1, Notas=1, Nota=0, NotaS=0, PromedioA=0, PromedioS=0, PromedioC=0;

    while (Alumnos<=30)
    {
        printf("Ingrese las diez notas del alumno %d\n\n", Alumnos);

        while (Notas<=10)
        {
            printf("Nota %d: ", Notas);
            scanf("%d", &Nota);

            NotaS=NotaS+Nota;
            PromedioA=NotaS/10;

            Notas++;
        }
        system("cls");

        printf("El promedio del alumno %d es %d\n\n", Alumnos, PromedioA);

        NotaS=0;
        Notas=1;

        PromedioS=PromedioS+PromedioA;
        PromedioC=PromedioS/30;

        PromedioA=0;

        Alumnos++;
    }
    printf("El promedio general del curso es %d", PromedioC);
    return 0;
}
