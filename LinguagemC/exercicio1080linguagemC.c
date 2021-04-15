#include<stdio.h>

int main()
    {

         int  i,n,
         maior = 0,
         posicao = 0;


         for(i=1;i<=3;i++)
         {
             scanf("%d",&n);
             if(n>maior)
             posicao = i ,maior = n;



         }
          printf("%d\n",maior);
          printf("%d\n",posicao);





        return 0;
    }
