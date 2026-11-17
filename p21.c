// 两个乒乓球队比赛，各出三个人，甲队为ABC，乙队为XYZ
// A不和X比，C不和XZ比，求对局安排

// 分析：
//         A       B       C
//     X   0       1       0
//     Y   1       1       1
//     Z   1       1       0

#include <stdio.h>

const char team1[3] = {'A', 'B', 'C'};
const char team2[3] = {'X', 'Y', 'Z'};

const int matchTable[3][3] = {
    {0, 1, 1},
    {1, 1, 1},
    {0, 1, 0},
};

int checkSum(int i, int j, int k)
{
        int sum = 0;
        sum += matchTable[0][i];
        sum += matchTable[1][j];
        sum += matchTable[2][k];
        return sum == 3;
}

int checkOnce(int i, int j, int k)
{
        return i != j && j != k && i != k;
}

int main(void)
{
        // 为team1中的队员在team2中寻找对手
        // [1, 2, 0, 1] 表示 SUCCESS,AZ,BX,CY
        int match[4] = {0, -1, -1, -1};

        for (int i = 0; i < 3; i++)
        {
                for (int j = 0; j < 3; j++)
                {
                        for (int k = 0; k < 3; k++)
                        {
                                if (checkSum(i, j, k) && checkOnce(i, j, k))
                                {
                                        match[0] = 1;
                                        match[1] = i;
                                        match[2] = j;
                                        match[3] = k;
                                        goto END;
                                }
                        }
                }
        }

END:
        if (match[0])
        {
                printf("安排方式如下：\n");
                printf("        %c%c\n", team1[0], team2[match[1]]);
                printf("        %c%c\n", team1[1], team2[match[2]]);
                printf("        %c%c\n", team1[2], team2[match[3]]);
        }
        else
                printf("未找到可行的安排方式\n");

        return 0;
}
