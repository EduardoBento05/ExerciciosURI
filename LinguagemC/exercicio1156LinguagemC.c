#include <stdio.h>

int main(void)
        {
           double n,b,d=1;

            double s=0;

            for(n=1;n<=39;n+=2)
            {
                b = n/d;
                s += b;
                d*=2;
            }
            printf("S = %.2lf\n",s);

            return 0;
        }
