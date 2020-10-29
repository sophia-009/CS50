#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    if (argc != 2)                                      // gets a valid key at cli
    {
        printf("Usage: ./caesar key\n");
        return 1;                                      // stops programming
    }

    int k = atoi(argv[1]);

    if (k < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int j = 0; j < strlen(argv[1]); j++)
    {

        if (argv[1][j] < 48 || argv[1][j] > 57)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    string p = get_string("plaintext: ");

    char c[strlen(p)];

    printf("ciphertext: ");

    for (int i = 0, n = strlen(p); i < n; i++)
    {

        if (isupper(p[i]))
        {
            p[i] = p[i] - 65;
            c[i] = (p[i] + k) % 26 + 65;
            printf("%c", c[i]);
        }

        else if (islower(p[i]))
        {
            p[i] = p[i] - 97;
            c[i] = (p[i] + k) % 26 + 97;
            printf("%c", c[i]);
        }

        else
        {
            c[i] = p[i];
            printf("%c", c[i]);
        }
    }

    printf("\n");

}