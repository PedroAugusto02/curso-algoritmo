#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j;

    printf("Escreva quantas linhas vai ter a matriz: ");
    scanf("%d",&x);
    printf("Escreva quantas colunas vai ter a matriz: ");
    scanf("%d",&y);

    int vet[x][y];

    for (i = 0; i < x; i ++) {
        for (j = 0; j < y; j ++) {
            printf("Elemento [%d][%d]: ",i,j);
            scanf("%d",&vet[i][j]);
        }
    }

    printf("\n Matriz \n");

    for (i = 0; i < x; i ++) {
        for (j = 0; j < y; j ++) {
            printf("%d ",vet[i][j]);
        }
        printf("\n");
    }

    return 0;
}
