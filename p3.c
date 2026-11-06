// 设圆半径r=1.5，圆柱高h=3，求圆周长，圆面积，圆球表面积，圆球体积，圆柱体积。
// 用scanf输入数据，输出并计算结果，输出时有文字说明，取小数点后两位数字

#include <stdio.h>

#define PI 3.14

int main(void)
{
        // 圆半径
        float r;
        // 圆柱高
        float h;

        printf("输入圆半径r和圆柱高h：");
        scanf("%f%f", &r, &h);

        float yuanZhouchang, yuanMianji, yuanqiuBiaomianji, yuanqiuTiji, yuanzhuTiji;
        yuanZhouchang = 2.0 * PI * r;
        yuanMianji = PI * r * r;
        yuanqiuBiaomianji = 4.0 * PI * r * r;
        yuanqiuTiji = 4.0 / 3.0 * PI * r * r * r;
        yuanzhuTiji = yuanMianji * h;

        printf("圆周长：%.2f\n", yuanZhouchang);
        printf("圆面积：%.2f\n", yuanMianji);
        printf("圆球表面积：%.2f\n", yuanqiuBiaomianji);
        printf("圆球体积：%.2f\n", yuanqiuTiji);
        printf("圆柱体积：%.2f\n", yuanzhuTiji);

        return 0;
}
