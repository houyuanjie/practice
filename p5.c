// 有一个函数
//      x   ,      x <  1
// y = 2x-1 , 1 <= x <  10
//     3x-1 ,      x >= 10

#include <stdio.h>

int y(int x)
{
        if (x < 1)
                return x;
        else if (1 <= x && x < 10)
                return 2 * x - 1;
        else
                return 3 * x - 1;
}

int main(void)
{
        int x, res;

        printf("输入整数x：");
        scanf("%d", &x);

        res = y(x);
        printf("y：%d\n", res);

        return 0;
}
