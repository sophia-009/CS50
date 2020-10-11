# include <stdio.h>
# include <cs50.h>
# include <string.h>
# include <math.h>

int main(void)
{
    string Text = get_string("Text: ");

    float letters = 0;
    float words = 0;
    float sentences = 0;


    for (int i = 0, n = strlen(Text); i < n; i++)
    {
        if (Text[i] >= 65 && Text[i] <= 122)
        {
            letters++;
        }
        else if (Text[i] == 32 && (Text[i - 1] != 33 && Text[i - 1] != 46 && Text[i - 1] != 63))
        {
            words++;
        }
        else if (Text[i] == 33 || Text[i] == 46 || Text[i] == 63)
        {
            sentences++;
            words++;
        }
    }
    float L = letters * 100 / words;
    float S = sentences * 100 / words;
    float index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) index);
    }
}