// 求一个3*3的整形矩阵对角线元素之和

#include <stdio.h>

int main(void)
{
        int a[3][3];
        int sum1 = 0;
        int sum2 = 0;

        // 输入矩阵
        scanf("%d%d%d", &a[0][0], &a[0][1], &a[0][2]);
        scanf("%d%d%d", &a[1][0], &a[1][1], &a[1][2]);
        scanf("%d%d%d", &a[2][0], &a[2][1], &a[2][2]);

        // 求和
        for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                {
                        // 主对角线
                        if (i == j)
                                sum1 += a[i][j];
                        // 副对角线
                        if (i + j == 2)
                                sum2 += a[i][j];
                }

        // 输出
        printf("主对角线元素之和：%d\n", sum1);
        printf("副对角线元素之和：%d\n", sum2);

        return 0;
}
