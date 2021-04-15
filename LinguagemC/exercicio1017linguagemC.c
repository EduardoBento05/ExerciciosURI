#include <stdio.h>

int main ()
    {
        int t,v;
        double km;
        scanf("%d %d",&t,&v);
        km = t*v;
        printf("%0.3lf\n",(km/12));

        return 0;
    }
