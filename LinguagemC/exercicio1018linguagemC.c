#include <stdio.h>

int main ()
    {
        int valor,sobra,cem , cinquenta , vinte , dez , cinco , dois , um;
        scanf("%d",&valor);
        sobra = valor;
        cem = sobra/100;
        sobra = sobra - (cem*100);
        cinquenta = sobra /50;
        sobra = sobra - (cinquenta*50);
        vinte = sobra / 20;
        sobra = sobra - (vinte*20);
        cinco = sobra /5;
        sobra = sobra - (cinco*5);
        dois = sobra / 2;
        sobra = sobra - (dois*2);
        printf("%d\n",valor);
        printf("%d nota(s) de R$ 100,00\n",cem);
        printf("%d nota(s) de R$ 50,00\n",cinquenta);
        printf("%d nota(s) de R$ 20,00\n",vinte);
        printf("%d nota(s) de R$ 10,00\n",dez);
        printf("%d nota(s) de R$ 5,00\n",cinco);
        printf("%d nota(s) de R$ 2,00\n",dois);
        printf("%d nota(s) de R$ 1,00\n",sobra);


        return 0;
    }
