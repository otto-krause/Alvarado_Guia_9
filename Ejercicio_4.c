#include<stdlib.h>
#include<stdio.h>

int main()
{
    int Num=0, NumM=1, NumF=0;
    printf("Ingrese el numero del cual desea saber su factorial: ");
    scanf("%d", &Num);
    
    NumF=Num;

    while (NumM<Num)
    {
        NumF=NumF*NumM;
        NumM++;
    }
    printf("\nEl factorial de %d es %d", Num, NumF);
}