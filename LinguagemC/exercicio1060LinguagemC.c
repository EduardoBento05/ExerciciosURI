#include <stdio.h>

int main(void)
            {
                int i ,
                     j=0;

                double
                a;

                for(i=1;i<=6;i++)
                {
                    scanf("%lf",&a);
                    if(a>0)
                        j++;
                }
                printf("%d valores positivos\n",j);

                return 0;
            }
