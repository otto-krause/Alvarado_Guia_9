#include<stdlib.h>
#include<stdio.h>

int main()
{
    int Numeros=1, Num=0, NumPos=0, NumNeg=0, Ceros=0;
    printf("Ingrese diez numeros:\n\n");

    while (Numeros<=10)
    {
        printf("Numero %d: ", Numeros);
        scanf("%d",&Num);
        if(Num>0)
            {
            NumPos+=1;
            }
        else
            if (Num<0)
                {
                NumNeg+=1;
                }
            else
                {
                Ceros+=1;
                }

        Numeros++;
        }
    system("cls");

    printf("Los numeros positivos ingresados fueron %d, los negativos %d y los iguales a cero %d", NumPos, NumNeg, Ceros);
    return 0;
}
