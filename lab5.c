#include <stdio.h>
#define size_x 3
#define size_y 4


int avarage (int k[size_x][size_y])
{
   int a = 0, b = 0, c = 0;
   
   for(int i = 0; i < size_x; i++)
   {
       a += k[i][0];
       b++;
   }
   
   c = a/b;
   
   return c;
}

int main (void)
{
    int arr[size_x][size_y];
    int a = 0, b = 0, c = 0;
    
    for (int i = 0; i < size_x; i++)
    {
        for (int j = 0; j < size_y; j++)
        {
            printf ("Enter elemet a%i%i: ", i + 1, j + 1);
            scanf("%i", &a);
            arr[i][j] = a;
        }
    }
    
    b = avarage (arr);
    
    for (int i = 0; i < size_x; i++)
    {   
        for (int j = 0; j < size_y; j++)
        {
            printf("%i ", arr[i][j]);
        }
        printf("\n");   
    }
    
    printf ("Avarage of elements of 1 column = %i\n", b);
    
    for (int i = 1; i < size_y; i++)
    {   
        c = 0;
        for (int j = 0; j < size_x; j++)
        {
            if (b < arr[j][i])
            {
                c++;
            }
        }
        printf("Number of element %i column, which biger then average 1 column: %i\n", i + 1, c);
    }
	return 0;
}
