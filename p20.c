// 用二分法求下面方程在(-10, 10)的根：
//         2x^3 - 4x^2 + 3x - 6 = 0
// 要求精度小于10^(-5)

#include <stdio.h>
#include <math.h>

float error(float x)
{
        float res = 0.0;
        res += 2 * x * x * x;
        res += -4 * x * x;
        res += 3 * x;
        res += -6;
        return res;
}

int main(void)
{
        float up = 10.0;
        float down = -10.0;

        float mid = (up + down) / 2;
        float err = error(mid);

        while (fabsf(err) >= 1e-5)
        {
                // 函数在(-10, 10)单调，且两端异号
                if (err < 0)
                        down = mid;
                else
                        up = mid;

                mid = (up + down) / 2;
                err = error(mid);
        }

        printf("根为：%.3f\n", mid);

        return 0;
}
