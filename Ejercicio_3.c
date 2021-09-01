#include<stdlib.h>
#include<stdio.h>

int main()
{
    int Num1=0, Num2=0, NumI=0;
    printf("Ingrese dos numeros:\n");
    scanf("%d", &Num1);
    scanf("%d", &Num2);

    if (Num1<Num2)
    {
        while (NumI<Num2-1)
        {
            NumI=Num1+1;
            Num1=NumI;

            printf("\n%d", NumI);
        }
    }
    else
    {
        while (NumI<Num1-1)
        {
            NumI=Num2+1;
            Num2=NumI;
            
            printf("\n%d", NumI);
        }
    }
    return 0;
}