# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");                  //prompts user for a height
    }                                           
    while (n < 1 || n > 8);                       //reprompts user for height if it is not in between 1 or 8 inclusive

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)        
        {
            if (i + j < n - 1)
            {
                                                 
                printf(" ");
                
            }          
            else                                 //number of spaces + # = height
            {
                printf("#");                     // prints spaces bfore printing #
            }      
        }
        printf("\n");
    }  
}