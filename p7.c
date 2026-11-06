// 有四个圆塔，圆心分别为(2,2),(-2,2),(-2,-2),(2,-2)，
// 圆半径为1，这四个塔的高度为10米，塔外无建筑物。
// 输入任一点的坐标，求该点建筑的高度。
// 在圆以外都是0，落到以内的取 (|x|-2)^2 + (|y|-2)^2 < 1 说明在圆内

#include <stdio.h>
#include <math.h>

float juli(float x, float y)
{
        float res = 0.0f;
        res += (fabs(x) - 2) * (fabs(x) - 2);
        res += (fabs(y) - 2) * (fabs(y) - 2);
        return res;
}

int main(void)
{
        float x, y;

        printf("输入两个数字作为坐标：");
        scanf("%f%f", &x, &y);

        if (juli(x, y) < 1.0)
                printf("高度为10米\n");
        else
                printf("高度为0米\n");

        return 0;
}
