// 写两个函数，分别求两个整数的最大公约数和最小公倍数，
// 用主函数调用这两个函数，并输出结果。
// （最大公约数*最小公倍数=两个数乘积）三个不行

#include <stdio.h>

int zuidagongyueshu(int x, int y)
{
        int n = (x < y) ? x : y;

        while (1)
        {
                if (x % n == 0 && y % n == 0)
                        break;
                n -= 1;
        }

        return n;
}

int zuixiaogongbeishu(int x, int y)
{
        int n = (x < y) ? y : x;

        while (1)
        {
                if (n % x == 0 && n % y == 0)
                        break;
                n += 1;
        }

        return n;
}

int main(void)
{
        int x, y;

        printf("输入两个整数：");
        scanf("%d%d", &x, &y);

        int gys = zuidagongyueshu(x, y);
        int gbs = zuixiaogongbeishu(x, y);

        printf("最大公约数：%d\n", gys);
        printf("最小公倍数：%d\n", gbs);

        return 0;
}
