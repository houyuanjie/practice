// 猴子吃桃：每天吃掉当前剩余的一半再加一个，
// 第10天早上想吃时只剩1个，求桃子总数

#include <stdio.h>

int main(void)
{
        // 第10天早上的剩余量（尚未吃）
        int taozi = 1;

        // 从第9天倒推到第1天
        // 每次迭代后taozi的含义都是：第tian天早上的剩余量
        for (int tian = 9; tian >= 1; tian--)
                taozi = (taozi + 1) * 2;

        // 第1天早上的剩余量，也就是摘的总数
        printf("总数：%d\n", taozi);

        return 0;
}
