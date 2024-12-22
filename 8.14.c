// 聪明猪Tom及其家人和其他猪群居，面临凶恶屠户Thomas，Thomas有一个嗜好，他喜欢将群居的猪排成一行，首先将处于奇数位置的猪送到屠宰场，剩下的猪自然成为新的一行。
// 在新的一行中，再次将处于奇数位置的猪送到屠宰场，如此重复多次。从键盘上输入所有猪的个数m，Tom及家人的个数n，求解Tom及家人应该站的最佳位置，输出这些位置。
    #include <stdio.h>
    int main()
    {
        int m, n;
        scanf("%d %d", &m, &n);
        int a[100] = {0}; 
        for (int i = 0; i < m; i++) {
            a[i] = i + 1; 
        }
        int amt = m;
        while (amt > n)
        {
            int j = 0;
            for (int i = 0; i < amt; i++)
            {
                if ((i + 1) % 2 == 0)
                {
                    a[j++] = a[i];
                }
            }
            amt = j; // 更新剩余数量
        }
        // 输出
        for (int i = 0; i < amt; i++)
        {
            printf("%d,", a[i]);
        }
        printf("\n");
        return 0;
    }
