#include <stdio.h>

    int main(void)
    {

         int x , y , count , aux;

         scanf("%d%d",&x,&y);
         aux = 0;

         for(count = x ; count <= y ; count++)
         {

          printf("%d ",count);
          aux += 1;

              if(aux == x)
              {
                  printf("\n");
                  aux = 0;
              }
              else
              {
                  printf("  ");
              }


         }


        return 0;
    }
