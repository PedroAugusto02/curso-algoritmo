#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    x = 10;
    y = 20;

    printf("%d\n", x);
    printf("%d\n", y);

    double z;

    z = 1,0;

    printf("%.2lf\n", z);

    int idade;
    double salario;
    char nome[50];
    char sexo;

    idade = 21;
    salario = 2500.9;
    strcpy(nome, "Pedro Augusto");
    sexo = 'M';

    printf("O funcionario %s, sexo %c, ganha %.2lf e tem %d anos",nome,sexo,salario,idade);

    }
