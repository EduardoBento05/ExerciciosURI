#include <stdio.h>

int main (void)
            {
                int op,n;

                scanf("%d%d",&op,&n);

                switch(op)
                {
                case 1:printf("Total: R$ %.2f\n",n*4.00);break;
                case 2:printf("Total: R$ %.2f\n",n*4.50);break;
                case 3:printf("Total: R$ %.2f\n",n*5.00);break;
                case 4:printf("Total: R$ %.2f\n",n*2.00);break;
                case 5:printf("Total: R$ %.2f\n",n*1.50);break;
                }

                return 0;
            }
