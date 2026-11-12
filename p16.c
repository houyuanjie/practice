// 一个球从100米落下，每次反弹回原来高度的一半，
// 再落下再反弹，求第10次落地时经过了多少米，第10次反弹高度

#include <stdio.h>

int main(void)
{
        // 初始时落下的高度是100
        float luoxia = 100.0;
        // 初始时总和为0
        float zonghe = 0.0;

        for (int i = 1; i <= 10; i++)
        {
                // 落下阶段
                zonghe += luoxia;

                // 反弹阶段
                luoxia /= 2;
                zonghe += luoxia;

                // printf("第%d次落地后反弹%.3f米，总和%.3f米\n", i, luoxia, zonghe);
        }

        // 第10次反弹起来的高度不算在总和内
        zonghe -= luoxia;

        printf("第10次落地时经过了%.3f米，将会反弹%.3f米\n", zonghe, luoxia);

        return 0;
}
