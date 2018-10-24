#include <stdio.h>

int main (void)
{
    int arr[100];
    int arr1[100];
    int arr2[100];
    int b = 0, a = 0, c = 0, n = 0, d = 0;
    
    
    for (int i = 0; i < 100; i++)
    {
        printf("Enter integers\n");
        scanf("%i", &a);
        
        arr[i] = a;
        c = i; 
        
        if ( a == 0 )
            break;
        
        printf("If you want stop, enter 0\n");
    }    
    
    printf ("How much element do you want print?\n");
    
    scanf ("%i", &b);
    
    printf ("Your integer: \n");
    
    for (int j = 0; j < b; j++)
    {   
        printf ("%i\n", arr[j]);

    }
    
    printf ("Remain: \n");
   
    for (int k = 0; k < c - b ; k++)
    {
        arr1[k] = arr[k+b];
        
        printf("%i\n", arr1[k]);
        n = k + 1;
    }
    
    printf ("How much element do you want print else?\n"); 
    
    scanf ("%i", &d);
    
    printf ("Your integer: \n");
    
    for (int j = 0; j < d; j++)
    {   
        printf ("%i\n", arr1[j]);
    }
    
    printf ("Remain: \n");
   
    for (int k = 0; k < n - d ; k++)
    {
        arr2[k] = arr1[k+d];
        
        printf("%i\n", arr2[k]);
    }   
}
