// 从键盘输入一个小于1000的正数，要求输出它的平方根（如平方根不是整数，则输出其整数部分）。
// 要求在输入数据后先对其进行检查是否为小于1000的正数。不是则重输

#include <stdio.h>

int main(void)
{
        int n = 0;

        while (n <= 0 || 1000 <= n)
        {
                printf("输入一个小于1000的正数：");
                scanf("%d", &n);
        }

        int r = n / 2 + 1;
        while (1)
        {
                if (r * r <= n && n < (r + 1) * (r + 1))
                {
                        break;
                }
                r -= 1;
        }

        printf("平方根：%d\n", r);

        return 0;
}
