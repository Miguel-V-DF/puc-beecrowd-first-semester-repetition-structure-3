#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    long int resultDecimal = 0;
    char nbrO[100], text[10];
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%99s %9s", nbrO, text);
        if(strcmp(text, "bin") == 0)
        {
            int length = 0;
            while(nbrO[length] != '\0')
            {
                length++;
            }
            for(int j = 0; j < length; j++)
            {
                int bit = nbrO[j] - '0';
                resultDecimal = resultDecimal * 2 + bit;
            }
            printf("Case %d:\n", i);
            printf("%ld dec\n", resultDecimal);
            printf("%x hex\n", resultDecimal);
            printf("\n");
        }
        else
        {
            if(strcmp(text, "hex") == 0)
            {
                resultDecimal = strtol(nbrO, NULL, 16);
                printf("%ld dec\n", resultDecimal);
            }
        }

    }

    return 0;
}