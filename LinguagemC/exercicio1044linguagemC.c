#include <stdio.h>

int main (void)
        {

            int a,b;

            scanf("%d%d",&a,&b);

            if(a%b == 0 || b%a == 0)
            {
                printf("Sao multiplos\n");
            }

            else
            {
                printf("Nao sao multiplos\n");
            }


            return 0;
        }