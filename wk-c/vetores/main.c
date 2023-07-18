#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;

    printf("Quantos numeros voce vai digitar: ");
    scanf("%d",&n);

    double x[n];

    for(i = 0;i < n; i ++){
        printf("Digite o numero da posicao %d : ",i);
        scanf("%lf",&x[i]);
    }

    printf("\n Numeros Digitados \n");

    for(i = 0; i < n; i ++) {
        printf("%.1lf\n",x[i]);
    }

    return 0;
}
