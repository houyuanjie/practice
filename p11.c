// Sigma(1,n){n!}

#include <stdio.h>

int main(void)
{
        int n;

        printf("输入n：");
        scanf("%d", &n);

        if (n < 1 || 20 < n)
        {
                printf("n不能小于1且不能大于20\n");
                return 1;
        }

        long long sum = 0;
        long long fact = 1;

        for (int i = 1; i <= n; i++)
        {
                fact *= i;
                sum += fact;
        }

        printf("Sigma{n!} = %lld\n", sum);

        return 0;
}
