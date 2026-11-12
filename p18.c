// 用迭代法求 x=sqrt(a)，迭代公式为
//         x_{n+1} = 1/2 * (x_n + a / x_n)
// 要求前后两次求出x的差的绝对值小于 10^(-5)

#include <stdio.h>
#include <math.h>

float next(float x, float a)
{
        return 1.0 / 2 * (x + a / x);
}

int main(void)
{
        float a;

        printf("输入a：");
        scanf("%f", &a);

        float x = 1.0;
        float xNext = next(x, a);

        while (fabs(xNext - x) >= 1e-5)
        {
                x = xNext;
                xNext = next(x, a);
        }

        printf("x等于：%.5f\n", x);

        return 0;
}
