#include <stdio.h>

int main ()
        {
            int t ,h,m,s,x;
            scanf("%d",&t);
            h = t / 3600;
            x = t % 3600;
            m = x/60;
            s = x % 60;
            printf("%d : %d : %d\n",h,m,s);

            return 0;
        }
