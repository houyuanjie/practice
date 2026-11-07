// 求 Sigma(1,100){k} + Sigma(1,50){k^2} + Sigma(1,10){1/k}

#include <stdio.h>

int main(void)
{
        double sum = 0.0;

        for (double i = 1.0; i <= 100; i++)
                sum += i;
        for (double i = 1.0; i <= 50; i++)
                sum += i * i;
        for (double i = 1.0; i <= 100; i++)
                sum += 1 / i;

        printf("%.2lf\n", sum);

        return 0;
}
