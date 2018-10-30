#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max_sym 255

int main (void)
{
    char arrA[max_sym], max_word[max_sym], min_word[max_sym];
    int n = max_sym, max = 0, k = 0, end_max, len, min = 100, end_min, p = 0;
    
    fgets(arrA, n, stdin);
    
    len = strlen(arrA);
    
    for(int i = 0; i < len; i++)
    {
        if (isspace(arrA[i]))
            arrA[i] = '\0';
    }

    for(int i = 0; i < len; i++)
    {
        if (arrA[i] != '\0' && arrA[i] != '.')
            k++; 
        else
        {
            if (k > max)
            { 
                max = k;
                end_max = i;
            }   
            k = 0;
        }    
        
    }
    
    for(int i = 0; i < len; i++)
    {
        if (arrA[i] != '\0')
            p++; 
        else
        {
            if (p < min)
            { 
                min = p;
                end_min = i;
            }   
            p = 0;
        }    
        
    }
    
    for(int i = 0; i < min; i++)
    {
        min_word[i] = arrA[end_min - min + i];
    }
    
    printf("The smallest word: ");
    
    for(int i = 0; i < min; i++)
    {
        printf("%c", min_word[i]);
    }
    
    printf("\nIts lenth: %i\n", min);
    
    for(int i = 0; i < max; i++)
    {
        max_word[i] = arrA[end_max - max + i];
    }
    
    printf("The largest word: ");
    
    for(int i = 0; i < max; i++)
    {
        printf("%c", max_word[i]);
    }
    
    printf("\nIts lenth: %i\n", max);
    
    return 0;

}
