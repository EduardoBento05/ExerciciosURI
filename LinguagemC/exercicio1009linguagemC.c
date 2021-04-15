#include <stdio.h>

int main ()
    {
        char primeironomedovendedor;
        double A, B;
        scanf("%s",&primeironomedovendedor);
        scanf("%lf %lf",&A ,&B);
        printf("TOTAL = R$ %.2lf\n",(A+(B*0.15)));
    }
