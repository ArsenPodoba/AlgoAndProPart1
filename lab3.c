#include <stdio.h>
#include <math.h>

long double factorial (long double i)
{
    long double l;
    l = 1.0;
    if ( i == 1 || i == 0)
        return 1;
    else 
        for (; i > 1; i--)
            l *= i;
        return l;
}                  

int main (void)
{
    long double x, y, a, b, c, d, e, g, z, p, f, k;
    int n;
    c = 0.0;
    
    for (x = 0.1; x <= 1.01; x += 0.1)
    {
        a = (1.0 - ((x*x)/2.0))*cos(x);
        b = ((x/2.0)*sin(x));
        y = (a - b);
        printf ("X: %Lf  Y: %Lf ", x, y); 
        
        z = 0.0;
        
        for (n = 0; n < 35.0; n++)
        {
            d = pow(-1.0, n);
            e = pow(x, 2.0*n);
            f = factorial (2.0*n);
            g = ((2.0*n*n) + 1.0);
            p = (d*g*e/f);
            z += p;
        }
        
        k = 0.0;
        
        n = 0;
        
        do
        {
            d = pow(-1.0, n);
            e = pow(x, 2.0*n);
            f = factorial (2.0*n);
            g = ((2.0*n*n) + 1.0);
            p = (d*g*e/f);
            k += p;
            n++;
        } while (p > 0.0001);
                  
        printf("S1: %Lf S2: %Lf\n", z, k);        
    }
}
