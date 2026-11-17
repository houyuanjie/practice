// 用筛选法求100以内的素数
// 素数：约数为1和该数本身的数字即素数，1不是

#include <stdio.h>

// 要求：1 <= n
int isPrime(int n)
{
        // （条件A）1不是素数
        if (n == 1)
                return 0;

        // （条件B1）第一个因数为1能自然满足

        // （条件B2）从2开始寻找第二个因数
        int fact = 2;
        while (fact <= n)
        {
                if (n % fact == 0)
                        break;
                else
                        fact++;
        }

        // 第二个因数是该数字本身
        return fact == n;
}

int main(void)
{
        for (int n = 1; n < 100; n++)
                if (isPrime(n))
                        printf("%d是一个素数\n", n);

        return 0;
}
