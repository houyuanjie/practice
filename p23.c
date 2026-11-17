// 选择法排序

#include <stdio.h>

int main(void)
{
        int a[] = {6, 5, 7, 1, 2, 3, 9, 8, 2, 0};
        int len = sizeof(a) / sizeof(int);

        // 选择法：
        //     每次循环结束时：
        //         有序序列增长一位，剩余序列减少一位
        //     每次循环中：
        //         站在剩余序列的开头位置，在剩余序列中找最小值位置，
        //         交换开头位置和最小值位置的数值

        // p: 当前处理位置
        for (int p = 0; p < len; p++)
        {
                // 最小值位置
                int min = p;

                // 寻找最小值
                for (int i = p; i < len; i++)
                        if (a[i] < a[min])
                                min = i;

                // 交换
                int curr = a[p];
                a[p] = a[min];
                a[min] = curr;
        }

        // 打印结果
        for (int i = 0; i < len; i++)
                printf("%d ", a[i]);
        printf("\n");

        return 0;
}
