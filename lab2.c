#include <stdio.h>
#include <math.h>

int main (void)
{
    double a,b,c,d = 0;
    int n = 2;

    for(; n <= 17; n++)
    {
        a = log(n);
        b = pow(n, a);
        c = pow(a, n);
        d +=  b/c; // d = d + b/c
    }

    printf("%lf\n", d);

    return 0;
}
