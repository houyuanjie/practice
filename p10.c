// 求S=a+aa+aaa+aaaa，其中a是一个数字，n表示位数，a和n由键盘输入

#include <stdio.h>

int main(void)
{
        int S, a, n;

        S = 0;

        printf("输入a和n的值：");
        scanf("%d%d", &a, &n);

        int term = 0;
        for (int i = 0; i < n; i++)
        {
                term *= 10;
                term += a;
                S += term;
        }

        printf("S：%d\n", S);

        return 0;
}
