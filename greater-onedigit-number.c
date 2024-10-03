#include <stdio.h>

int main()
{
    int n, m, sumN = 0, sumM = 0, repeater = 0;

    scanf("%d %d", &n, &m);

    do
    {
        while(n > 0)
        {
            printf("----------\nstart of the loop\n");
            sumN = sumN + n % 10;
            printf("sumN: %d\n", sumN);
            n = n / 10;
            printf("n: %d\n", n);
            printf("----------\nend of the loop\n");
        }
        printf("----------\nfinal numbers\n");
        printf("n: %d\n", n);
        printf("sumN: %d\n", sumN);
        if(sumN > 9) 
        {
            repeater == 1;
            n = sumN;
            sumN = 0;
        }
        else
        {
            repeater = 0;
        }
    }
    while(repeater == 1);

    do
    {
        while(m > 0)
        {
            printf("----------\nstart of the loop\n");
            sumM = sumM + m % 10;
            printf("sumM: %d\n", sumM);
            m = m / 10;
            printf("m: %d\n", m);
            printf("----------\nend of the loop\n");
        }
        printf("----------\nfinal numbers\n");
        printf("m :%d\n", m);
        printf("sumM: %d\n", sumM);
        if(sumM > 9) 
        {
            repeater == 1;
            m = sumM;
            sumM = 0;
        }
        else
        {
            repeater = 0;
        }
    }
    while(repeater == 1);
    if(sumN > sumM)
    {
        printf("1\n");
    }
    else
    {
        if(sumN < sumM)
        {
            printf("2\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}