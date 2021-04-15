#include <stdio.h>

int main ()
    {
         int codnum1, nump1,codnum2,nump2;
         float valor1,valor2;
         scanf("%d %d %f",  &codnum1, &nump1, &valor1);
         scanf("%d %d %f", &codnum2, &nump2, &valor2);
         printf("VALOR A PAGAR: R$ %.2f\n",((nump1*valor1)+(nump2*valor2)));

        return 0;
    }
