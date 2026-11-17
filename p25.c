// 插入有序数组

#include <stdio.h>

int main(void)
{
        int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
        //                                      ^
        //                                   空余位置
        int len = 9;

        // 输入一个数字
        int value;
        scanf("%d", &value);

        // 寻找插入位置
        int i;
        for (i = 0; i < len; i++)
                if (a[i] <= value)
                        continue;
                else
                        break;

        // 移动 a[i..(len-1)] -> a[(i+1)..len]
        // 空出 a[i]
        for (int p = len; p > i; p--)
                a[p] = a[p - 1];

        // 插入 a[i]
        a[i] = value;

        // 输出
        for (int j = 0; j < 10; j++)
                printf("%d ", a[j]);
        printf("\n");

        return 0;
}
