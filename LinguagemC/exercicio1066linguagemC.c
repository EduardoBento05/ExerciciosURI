#include <stdio.h>

int main (void)
        {
            int i,a,
            par=0,
            imp=0,
            pos=0,
            neg=0;

            for(i = 1 ; i <=5 ; i++)
            {
             scanf("%d",&a);
                if(a % 2 == 0)
                {
                    par++;
                }
                else
                {
                    imp++;
                }
                if(a>0)
                {
                    pos++;
                }
                else if(a<0)
                {
                    neg++;
                }
            }
            printf("%d valor(es) par(es)\n",par);
            printf("%d valor(es) impar(es)\n",imp);
            printf("%d valor(es) positivo(s)\n",pos);
            printf("%d valor(es) negativo(s)\n",neg);





            return 0;
        }
