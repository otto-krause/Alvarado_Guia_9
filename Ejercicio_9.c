#include<stdlib.h>
#include<stdio.h>

int main()
{
    int Personas=1, Sueldo=0, SMayor=0, SMenor=0;
    printf("Ingrese los sueldos de las veinte personas\n\n");

    while (Personas<=20)
    {
        printf("Persona numero %d: ", Personas);
        scanf("%d",&Sueldo);
        if(Sueldo>2000)
            {
            SMayor+=1;
            }
        else
            {
            SMenor+=1;
            }

        Personas++;
    }
    printf("La cantidad de personas que cobran mas de $2000 son %d y las que cobran menos de $2000 son %d", SMayor, SMenor);
    return 0;
}
