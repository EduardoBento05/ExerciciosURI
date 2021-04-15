#include <stdio.h>

int main(void)
        {

            int i ,
            j = 0;
            double media=0,
            a = 0,
            soma=0;

            for(i = 1;i <= 6 ; i++)
            {
                scanf("%lf",&a);

                if(a>0)
                {
                    j++;
                    soma += a;
                }

            }
            media = soma/j;
            printf("%d valores positivos\n",j);
            printf("%.1lf\n",media);
            return 0;
        }
