#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (x <= 10)
        {
            printf("A[%d] = %d\n", i, x);
        }
    }

    return 0;
}