#include <stdio.h>
#include <math.h>

int main (void)
{
    float a,b,c,d,e,j;

    printf("Enter 'a': \n");
    scanf("%f", &a);
    printf("Enter 'b': \n");
    scanf("%f", &b);

    c = pow(a-b,4);
    d = (a*a*a*a-4*a*a*a*b);
    e = (6*a*a*b*b-4*a*b*b*b+b*b*b*b);
    j = (c-d)/e;

    printf("Your result %f\n", j);

    return 0;
}
