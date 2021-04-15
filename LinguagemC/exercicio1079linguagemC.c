#include <stdio.h>

int main()
    {

        int i,n;

        double n1,n2,n3,
        media = 0;

        scanf("%d",&n);

        for(i=1;i<=n;i++)
        {

            scanf("%lf%lf%lf",&n1,&n2,&n3);
            media = ((n1*2.0) + (n2 * 3.0) + (n3 *5.0))/10.0;
            printf("%.1lf\n",media);

        }


        return 0 ;
    }
