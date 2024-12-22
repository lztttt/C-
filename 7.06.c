    #include <stdio.h>
    int main()
    {
        int n, a[100], i, j, cache;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        } // 输入
        for (j = 0; j < n; j++)
        {
            for (i = 0; i < n-1; i++)
            {
                if (a[i] > a[i+1])
                {
                    cache = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = cache;
                }
            }

        } // 冒泡排序
        for (i = 0; i < n; i++)
        {
            printf("%d", a[i]);
            if (i==n-1)
            {
                break;
            }
            printf(" ");
        } 
        printf("\n");
        return 0;
    }