// 杨辉三角，10行

#include <stdio.h>

int main(void)
{
        // 存储杨辉三角
        //     a[i] 表示第i行
        //     为了简化实现，a[0] 未使用
        //
        //     a[i][j] 表示第i行第j个数字
        //     a[i][j] = a[i-1][j-1] + a[i-1][j]
        //     为了简化实现，a[i][0] 总为0
        //
        //     第10行第10个元素存储在 a[10][10]，所以总共需要分配的空间大小是 int [11][11]
        int a[11][11] = {{0}};

        // 初始化第1行第1个元素
        a[1][1] = 1;

        // 计算第2到10行的元素
        for (int i = 2; i <= 10; i++)
                for (int j = 1; j <= i; j++) // 这里也可以用 j <= 10 作为循环条件
                        a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

        // 打印结果
        for (int i = 1; i <= 10; i++)
        {
                // 空格
                for (int n = i; n <= 10; n++)
                        printf("  ");

                for (int j = 1; j <= 10; j++)
                        if (a[i][j] != 0)
                                printf("%3d ", a[i][j]);
                        else
                                printf("    ");
                printf("\n");
        }

        return 0;
}
