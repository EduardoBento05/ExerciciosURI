#include <stdio.h>
#include <math.h>
int main ()
    {
        float x1,x2,y1,y2,Distancia,d1,d2;
        scanf("%f %f",&x1,&y1);
        scanf("%f %f",&x2,&y2);
        d1  = (x2-x1);
        d2  = (y2-y1);
        Distancia = sqrt(pow(d1,2)+pow(d2,2));
        printf("%.4f\n",Distancia);
    return 0 ;
    }
