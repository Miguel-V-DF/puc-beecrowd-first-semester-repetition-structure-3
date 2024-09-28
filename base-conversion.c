#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    long int resultDecimal;
    char nbrO[50], text[10];
    
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%s %s", nbrO, text);
        if(strcmp(text, "bin") == 0)
        {
            
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
                while(re)
                printf("%ld dec\n", resultDecimal);
            }
        }

    }

    return 0;
}