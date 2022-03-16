#include <stdio.h>
int main(void)
{
    int i, array[24], totalgrains, Grainsinsecondrow, squaresuntill100k;
    totalgrains=0;
    Grainsinsecondrow=0;
    squaresuntill100k=0;
    for(i=0; i<24; i++)
    {
       printf("enter number of grains is square %d\n ", i);
       scanf("%d", &array[i]);
       totalgrains=array[i]+totalgrains;
    }
    printf("total number of grains is %d\n", totalgrains);

    for(i=8; i<16; i++)
    {
        Grainsinsecondrow=Grainsinsecondrow+array[i];
    }
    printf("total number of grains in second row is %d\n", Grainsinsecondrow);

    for(i=0; i<24; i++)
    {
        squaresuntill100k=squaresuntill100k+array[i];
        if (squaresuntill100k>100000 && squaresuntill100k<200000)
        {
            printf("number of squares required to reach 100,000 grains is %d\n", i);
        }
    }

    return 0;
}
