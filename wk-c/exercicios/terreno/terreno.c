#include <stdio.h>
int main()
{
    double larg,comp,val,area,preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf",&larg);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf",&comp);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf",&val);

    area = larg * comp;
    preco = area * val;

    printf("Area do terreno = %.2lf \n",area);
    printf("Preco do terreno = %.2lf",preco);

    return 0;
}
