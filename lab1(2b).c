#include <stdio.h>

int main (void)
{
    int m,n;
    printf("Enter 'm': \n");
    scanf("%i", &m);
    printf("Enter 'n': \n");
    scanf("%i", &n);

    if (m++ < n)
        printf ("You entered correct numbers\n");
    else
        printf ("You entered false numbers\n");

    return 0;
}
