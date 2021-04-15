#include <stdio.h>

int main ()
        {
            int d,ano,mes,dia,x;
            scanf("%d",&d);
            ano = d/365;
            x = d % 365;
            mes = x / 30;
            dia = x % 30;
            printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
            return 0 ;
        }
