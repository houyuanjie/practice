// 将一个数组中的值按逆序存放

#include <stdio.h>

int main(void)
{
        int a[5] = {8, 6, 5, 4, 1};
        int len = 5;

        // 用来临时保存数据的中间变量
        int temp;

        // 交换元素
        for (int i = 0; i < len / 2; i++)
        {
                int p = len - 1 - i;

                temp = a[i];
                a[i] = a[p];
                a[p] = temp;
        }

        // 打印逆序后的数组
        for (int i = 0; i < len; i++)
                printf("%d ", a[i]);
        printf("\n");

        return 0;
}
