#include <stdio.h>
#include <stdlib.h>

int main ()
    {
        int A,B,C,MAIORAB,MAIORBC,MAIOR;
        scanf("%d %d %d",&A,&B,&C);
        MAIORAB = (A+B+abs(A-B))/2;
        MAIORBC = (B+C+abs(B-C))/2;
        MAIOR = (MAIORAB+MAIORBC+abs(MAIORAB-MAIORBC))/2;
        printf("%d eh o maior\n",MAIOR);
        return 0;
    }
