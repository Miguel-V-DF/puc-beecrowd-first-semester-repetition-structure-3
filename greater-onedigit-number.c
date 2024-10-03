#include <stdio.h>

int main()
{
    unsigned long long n, m;

    while(scanf("%llu %llu", &n, &m), !(n == 0 && m == 0))
    {
        unsigned long long sumN, sumM;
        do
        {
            sumN = 0;
            printf("sumN initial value: %llu\n", sumN);
            while(n > 0)
            {
                printf("----------\nstart of the loop\n");
                sumN = sumN + n % 10;
                printf("sumN: %llu\n", sumN);
                n = n / 10;
                printf("n: %llu\n", n);
                printf("----------\nend of the loop\n");
            }
            printf("----------\nfinal numbers\n");
            printf("n: %llu\n", n);
            printf("sumN: %llu\n", sumN);
            n = sumN;
            printf("n taking sumN: %llu\n", n);
        }
        while(sumN > 9);
        do
        {
            sumM = 0;
            printf("sumM initial value: %llu\n", sumM);
            while(m > 0)
            {
                printf("----------\nstart of the loop\n");
                sumM = sumM + m % 10;
                printf("sumM: %llu\n", sumM);
                m = m / 10;
                printf("m: %llu\n", m);
                printf("----------\nend of the loop\n");
            }
            printf("----------\nfinal numbers\n");
            printf("M: %llu\n", m);
            printf("sumM: %llu\n", sumM);
            m = sumM;
            printf("m taking sumM: %llu\n", m);
        }
        while(sumM > 9);

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
    }
    return 0;
}