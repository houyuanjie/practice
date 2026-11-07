// 输入一行字符，分别统计出其中英文字母，空格，数字和其它字符的个数

#include <stdio.h>

int main(void)
{
        int yinwenzimu = 0;
        int kongge = 0;
        int shuzi = 0;
        int qita = 0;

        printf("输入一行文字：\n");

        // 输入长度未知，不能通过scanf写入缓冲区，
        // 必须使用getchar来判断
        char c;
        while (1)
        {
                c = getchar();
                if (c == '\n')
                        break;
                else if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
                        yinwenzimu += 1;
                else if (c == ' ')
                        kongge += 1;
                else if ('0' <= c && c <= '9')
                        shuzi += 1;
                else
                        qita += 1;
        }

        printf("英文字母：%d，空格：%d，数字：%d，其它：%d\n",
               yinwenzimu, kongge, shuzi, qita);

        return 0;
}
