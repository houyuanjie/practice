// 水仙花数（三位数）

#include <stdio.h>

int main(void)
{
        for (int i = 100; i <= 999; i++)
        {
                int n0 = i % 10;
                int n10 = (i - n0) % 100;
                int n100 = i - n0 - n10;

                int n = n0 * n0 * n0;
                n += (n10 / 10) * (n10 / 10) * (n10 / 10);
                n += (n100 / 100) * (n100 / 100) * (n100 / 100);

                if (i == n)
                        printf("%d\n", i);
        }

        return 0;
}
