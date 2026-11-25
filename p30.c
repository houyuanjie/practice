// 折半查找法
// 有15个数字按从大到小的顺序放在一个数组中，
// 输入一个数，要求用折半查找法找出下标

#include <stdio.h>

int main(void)
{
        int a[15] = {15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

        // 输入一个数
        int n;
        printf("输入一个数：");
        scanf("%d", &n);

        // 折半查找法
        int low, mid, high;

        low = 0;
        high = 14;
        mid = (low + high) / 2;

        int i = -1;
        while (low < mid && mid < high)
        {
                // 检查边界和中间位置
                if (a[low] == n)
                {
                        i = low;
                        break;
                }
                if (a[high] == n)
                {
                        i = high;
                        break;
                }
                if (a[mid] == n)
                {
                        i = mid;
                        break;
                }

                // 缩小范围，继续循环
                if (a[mid] < n)
                {
                        high = mid;
                        mid = (low + high) / 2;
                }
                else
                {
                        low = mid;
                        mid = (low + high) / 2;
                }
        }

        // 打印结果
        if (i == -1)
                printf("未找到\n");
        else
                printf("在下标%d找到\n", i);

        return 0;
}
