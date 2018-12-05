#include <stdio.h>
#include <string.h>
#define max_size 255

int check_words(char k[max_size])
{
    int word = 0;
    char *token;
    
    token = strtok(k, " ,.!?");
    
    while (token != NULL)
    {
        token = strtok(NULL, " ,.!?");
        word++;
    }
    
    return word;
}

void enter_strings(FILE *fp)
{
    char string[max_size];
    fp = fopen("F1.txt", "w");
    
    if (fp != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            printf("Enter string #%i: \n", i+1);
            fgets(string, 255, stdin);
            fprintf(fp, "%s", string);
        }
        fclose(fp);
    }
    else
    {
        printf("hoooops...error!");
        fclose(fp);
    }
}

void copy_strings(FILE *fp, FILE *fp1)
{
    fp = fopen("F1.txt", "r");
    fp1 = fopen("F2.txt", "w");
    char buf[max_size], reserv[max_size];
    
    
    if (fp != NULL && fp1 != NULL)
    {
        while(fgets(buf, max_size, fp) != NULL)
        {
            int number_words;
            strcpy(reserv, buf);
                        
            number_words = check_words(reserv);
            
            if(number_words > 2)
            { 
                fputs(buf, fp1);
            }
        }
        fclose(fp);
        fclose(fp1);
    }
    else 
    {
        printf("ERROR!");
        fclose(fp);
        fclose(fp1);
    }  
}

void number_word(FILE *fp)
{
    fp = fopen("F2.txt", "r");
    
    char buf[max_size], *ptr;
    int word = 1, counter = 0, number_word = 0, i = 1;
    
    if (fp != NULL)
    {       
        while(fgets(buf, max_size, fp) != NULL)
        {   
            
            int max = 0;
            word = 1;         
            ptr = strtok(buf, " ,.!?");
            while (ptr != NULL)
            {
                for(int i = 0; i < strlen(ptr); i++)
                {
                    if(ptr[i] == 'a' || ptr[i] == 'e' || ptr[i] == 'i' || ptr[i] == 'o' || ptr[i] == 'u' || ptr[i] == 'y')
                    {
                        counter++;
                    }
                    else if(ptr[i] == 'A' || ptr[i] == 'E' || ptr[i] == 'I' || ptr[i] == 'O' || ptr[i] == 'U' || ptr[i] == 'Y')
                    {
                        counter++;
                    }
                }
                
                if(counter > max)
                {
                    max = counter;
                    number_word = word;
                }
                    
                counter = 0;
                
                ptr = strtok(NULL, " ,.!?");
                              
                word++;
            }
            
            printf("In %i string number of word which has max loud letters is %i\n", i, number_word);
            i++;
        }   
    }
    fclose(fp);
}

int main (void)
{
    FILE *F1 = NULL, *F2 = NULL;

    enter_strings(F1);
    copy_strings(F1, F2);
    number_word(F2);       
}
