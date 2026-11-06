// 编写一个C程序，运行输a,b,c三个值，输出其中值最大的

#include <stdio.h>

int main(void)
{
        int a, b, c, max;

        printf("输入三个整数：");

        scanf("%d%d%d", &a, &b, &c);
        if (a > b && a > c)
                max = a;
        if (b > a && b > c)
                max = b;
        if (c > a && c > b)
                max = c;

        printf("最大的整数是：%d\n", max);

        return 0;
}
