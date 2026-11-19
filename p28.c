// 输出（奇数阶）魔方阵

// 魔方阵是
//     一个n*n矩阵，元素不重复地在[1,n^2]上取得
//     它的每一行、每一列、主对角线、副对角线元素之和均相等

// 奇数阶魔方阵的【罗伯法】
//     1，把1放在第0行的正中列
//     2，下一个数放到当前格的右上格；行/列越界就绕回对边（取模）
//     3，若右上格已被占用，改放当前格的正下方
//     4，重复 n² 次

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int n = 0;

        // 判断输入n符合应用罗伯法的条件
        while (n < 1 || (n % 2 == 0))
        {
                printf("输入一个正的奇数：");
                scanf("%d", &n);
        }

        // 二维数组，存储魔方阵
        int (*m)[n] = (int (*)[n])malloc(n * n * sizeof(int));

        // 清零
        for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                        m[i][j] = 0;

        // 起点
        int i, j, x;
        i = 0;
        j = n / 2;
        x = 1;

        m[i][j] = x;
        x += 1;

        // 环绕设值
        while (x <= n * n)
        {
                // 寻找空位
                //     先试右上
                int next_j = (j == n - 1) ? (0) : (j + 1);
                int next_i = (i == 0) ? (n - 1) : (i - 1);
                //     若右上有值，则使用正下方
                if (m[next_i][next_j] != 0)
                {
                        next_j = j;
                        next_i = (i == n - 1) ? 0 : (i + 1);
                }

                j = next_j;
                i = next_i;

                m[i][j] = x;
                x += 1;
        }

        // 打印
        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < n; j++)
                        printf(" %4d ", m[i][j]);
                printf("\n");
        }

        return 0;
}
