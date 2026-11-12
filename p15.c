// 有一个分数数列
// 2/1,3/2,5/3,13/8,21/13
// 求出这个数列的前20项和

#include <stdio.h>

int main(void)
{
        int fenzi = 1;
        int fenmu = 1;
        float sum = 0;

        for (int i = 1; i <= 20; i++)
        {
                int shangyigeFenzi = fenzi;
                fenzi += fenmu;
                fenmu = shangyigeFenzi;

                sum += ((float)fenzi / (float)fenmu);
        }

        printf("数列和：%.3f\n", sum);

        return 0;
}
