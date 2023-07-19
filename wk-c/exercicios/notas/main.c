#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1,nota2;
    double media;

    printf("Digite a primeira nota: ");
    scanf("%d",&nota1);

    printf("Digite a segunda nota:  ");
    scanf("%d",&nota2);

    media = (nota1 + nota2)/ 2;

    if (media >= 6.0){
        printf("NOTA FINAL = %lf ",media);
    }else{
        printf("NOTA FINAL = %lf ",media);
        printf("REPROVADO");
    }

    return 0;
}
