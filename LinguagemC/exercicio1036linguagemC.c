#include <stdio.h>
#include <math.h>
int main (void)
        {
            double a,b,c,raiz;
            scanf("%lf %lf %lf", &a, &b, &c);
            raiz = b*b - 4.0*a*c;
            if (a == 0 || raiz < 0)
            {
                printf("Impossivel calcular\n");
            }
            else
            {
                printf("R1 = %.5lf\n",(-b+sqrt(raiz))/(2.0*a));
                printf("R2 = %.5lf\n",(-b-sqrt(raiz))/(2.0*a));
            }
            return 0;
        }
