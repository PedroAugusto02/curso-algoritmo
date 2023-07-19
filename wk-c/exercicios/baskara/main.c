#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,c,x1,x2;

    printf("Coeficiente a: ");
    scanf("%lf",&a);

    printf("Coeficiente b: ");
    scanf("%lf",&b);

    printf("Coeficiente c: ");
    scanf("%lf",&c);

    x1 = (-b + sqrt(b*b - 4 * a * c))/ 2 * a;
    x2 = (-b - sqrt(b*b - 4 * a * c))/ 2 * a;

    printf("X1 = %lf \n",x1);
    printf("X2 = %lf",x2);


    return 0;
}
