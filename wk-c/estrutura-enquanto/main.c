#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enquanto digitar o numero diferente de 0 o programa vai rodar: ");
    scanf("%d",&num);

    while( num != 0){

        printf("Numero digitado foi %d\n",num);
        printf("Enquanto digitar o numero diferente de 0 o programa vai rodar: ");
        scanf("%d",&num);
    }
        printf("Numero digitado foi %d ",num);

    return 0;
}
