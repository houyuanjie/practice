// 用牛顿迭代法求下面方程在1.5附近的根：
//         2x^3 - 4x^2 + 3x - 6 = 0
// 要求前后两次求出x的差的绝对值小于 10^(-5)

#include <stdio.h>
#include <math.h>

float f(float x)
{
        float res = 0.0;
        res += 2 * x * x * x;
        res += -4 * x * x;
        res += 3 * x;
        res += -6;
        return res;
}

float fPrime(float x)
{
        float res = 0.0;
        res += 6 * x * x;
        res += -8 * x;
        res += 3;
        return res;
}

float next(float x)
{
        return x - f(x) / fPrime(x);
}

int main(void)
{
        float x = 1.5;
        float xNext = next(x);

        while (fabsf(x - xNext) >= 1e-5)
        {
                x = xNext;
                xNext = next(x);
        }

        printf("根为：%.3f\n", x);

        return 0;
}
