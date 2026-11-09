#include <stdio.h>

int main(void)
{
    int n;
    long total = 0;
    int i = 1;
    scanf("%d", &n);
    if (n < 0)
    {
        printf("NG\n"); // 実際には "NG" が出力されている
        return 0;
    }
    while (1)
    {
        if (i > n)
        // (以下略)