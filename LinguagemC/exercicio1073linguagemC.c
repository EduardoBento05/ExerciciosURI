#include <stdio.h>
#include <math.h>
int main (void)
            {
                int n , i,
                m = 0;

                scanf("%d",&n);

                for(i = 1 ; i <= n ; i++)
                {
                    if( i % 2 == 0)
                    {
                      m = pow(i,2);
                      printf("%d^2 = %d\n",i,m);
                    }
                }

                return 0;
            }
