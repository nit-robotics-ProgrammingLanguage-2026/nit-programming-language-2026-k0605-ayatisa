#include <stdio.h>

int main(void)
{
    int n;
    long total = 0;
    
    if (scanf("%d", &n) != 1)
    {
        return 0;
    }

    if (n < 0)
    {
        printf("NG\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            total += i; // 実際の計算処理に合わせてここを調整してください
        }
        printf("%ld\n", total);
    }

    return 0;
}