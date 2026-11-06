// 给出一个百分制成绩，要求输出成绩等级。
// 90分及以上为A，80-89为B，70-79为C，60-69为D，60以下为E

#include <stdio.h>

int main(void)
{
        int n;

        printf("输入成绩：");
        scanf("%d", &n);

        if (90 <= n)
                printf("成绩等级是：A\n");
        if (80 <= n && n < 90)
                printf("成绩等级是：B\n");
        if (70 <= n && n < 80)
                printf("成绩等级是：C\n");
        if (60 <= n && n < 70)
                printf("成绩等级是：D\n");
        if (n < 60)
                printf("成绩等级是：E\n");

        return 0;
}
