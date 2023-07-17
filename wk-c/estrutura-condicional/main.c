#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Escreva a sua idade");
    scanf("%d",&idade);

    if (idade < 18){
        printf("Voce e menor de idade pois tem %d ",idade);
    }else{
        printf("Voce e maior de idade pois tem %d ",idade);
    }

    return 0;
}
