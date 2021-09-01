#include<stdlib.h>
#include<stdio.h>

int main()
{
    int Vendedores=1, Venta=0, VentaT=0, VentaG=0, VentaM=0, VDM=0;

    while (Vendedores<=2)
    {
        printf("Ingrese las ventas realizadas por el vendedor %d en un dia: ", Vendedores);
        scanf("%d", &Venta);

        VentaT=Venta*15;
        VentaG=VentaG+VentaT;

        if (VentaT>VentaM)
        {
            VentaM=VentaT;
            VDM=Vendedores;
        }

        printf("El vendedor %d vendio un total de %d unidades\n\n", Vendedores, VentaT);

        Vendedores++;
    }
    printf("Las ventas generales totales fueron de %d y el vendedor con mas ventas fue %d", VentaG, VDM);
    return 0;
}
