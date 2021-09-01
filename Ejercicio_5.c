#include<stdlib.h>
#include<stdio.h>

int main()
{
    int Num1=0, Num2=0, NumR=1, NumT=0;
    printf("Ingrese el numero base de la potencia: ");
    scanf("%d", &Num1);
    printf("Ingrese el numero exponente de la apotencia: ");
    scanf("%d", &Num2);

    NumT=Num1;

    while (NumR<Num2)
    {
        NumT=NumT*Num1;
        NumR++;
    }
    printf("La potencia de %d es %d", Num1, NumT);
}