// 将“China”译成密码，用原字母后面的第四个字母替代原来的字母，
// 分别用putchar函数和printf函数输出这五个字符

#include <stdio.h>

int main(void)
{
        char str[6] = "China";
        char res[6];

        for (int i = 0; str[i] != '\0'; i++)
        {
                char c = str[i];

                c += 4;
                putchar(c);

                res[i] = c;
        }

        printf("%s\n", res);

        return 0;
}
