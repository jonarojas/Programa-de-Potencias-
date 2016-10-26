# include <stdio.h>
# include <stdlib.h>
int main()
{
    int nu, po, i, r=1;
    system ("color F4");
    printf("\n\t Programa para hacer potencias \n\t");
    printf("\n\t Introduce la base de la potencia: \n\t");
    scanf("%i",&nu);
    printf("\n\t Introduce el exponente de la potencia: \n\t");
    scanf("%i",&po);
    for (i=1;i<=po;i++)
    {
        r=r*nu;
    }
    printf("\n\t Resultado: %i \n\t",r);
    getch();
    return 0;
}
