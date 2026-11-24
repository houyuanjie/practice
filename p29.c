// 寻找一个3*3的二维数组的鞍点
// 鞍点，即该位置上的元素在该行最大，在该列最小
// 鞍点可能不存在

#include <stdio.h>

int main(void)
{
        int m[3][3];

        // 输入二维数组
        printf("输入一个3*3的二维数组\n");
        for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                        scanf("%d", &m[i][j]);

        // 每行最大元素的索引
        int maxOfRow[3] = {0};
        for (int i = 0; i < 3; i++)
                for (int j = 1; j < 3; j++)
                        if (m[i][maxOfRow[i]] < m[i][j])
                                maxOfRow[i] = j;

        // 每列最小元素的索引
        int minOfCol[3] = {0};
        for (int j = 0; j < 3; j++)
                for (int i = 1; i < 3; i++)
                        if (m[i][j] < m[minOfCol[j]][j])
                                minOfCol[j] = i;

        // 寻找鞍点
        int i, j;
        for (i = 0; i < 3; i++)
                for (j = 0; j < 3; j++)
                        if (m[i][j] == m[i][maxOfRow[i]] && m[i][j] == m[minOfCol[j]][j])
                                goto END;

END:
        // 打印结果
        if (i == 3 && j == 3)
                printf("未找到\n");
        else
                printf("鞍点是：[%d][%d]，值是：%d\n", i, j, m[i][j]);

        return 0;
}
