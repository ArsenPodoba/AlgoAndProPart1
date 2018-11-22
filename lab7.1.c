#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max_size 100
#define max_number 10

int check (int k[max_number])
{
    int calc = 0;
    
    for(int i = 0; i < max_number; i++)
    {
        if(k[i]%2 == 1)
            calc++;        
    }
    
    return calc;
}

int check1 (char k[max_size])
{
    int word = 0;
    char *token;
    
    token = strtok(k, " ,.!");
    
    while (token != NULL)
    {
        token = strtok(NULL, " ,.!");
        word++;
    }
    
    return word;
}

int main (void)
{
    int numbers[max_number];
    int element, num, num_word;
    char string[max_size];
    
    printf("Enter random words: \n");
    
    fgets(string, max_size, stdin);
    
    num_word = check1(string);
    
    printf("Number of words in your string: %i\n", num_word);
    printf("Enter element: \n");
    
    for(int i = 0; i < max_number; i++)
    {
        scanf("%i", &element);
        numbers[i] = element;
    }
    
    num = check(numbers);
    
    printf("Number of odd numbers: %i\n", num);
    
    return 0;
}
