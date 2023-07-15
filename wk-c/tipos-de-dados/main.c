#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double y;
    char c;
    char t[16];
    int l;

    x = 10;
    y = 2,0;
    c = 'A';
    strcpy(t,"Pedro Augusto");
    l = 1;

    printf("Numero inteiro: %d\n",x);
    printf("Numero real: %.2lf\n",y);
    printf("Caractere: %c\n",c);
    printf("String: %s\n",t);
    printf("Logico: %d\n",l);


    return 0;
}
