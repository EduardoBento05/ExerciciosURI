#include<stdio.h>

int main(void)
        {
            double d , b= 1, c ,
            S =0;

            for(d=1;d<=100;d++)
            {


                c=1/d;
               S += c;


            }
            printf("S = %.2lf\n",S);

            return 0;
        }
