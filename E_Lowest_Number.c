#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x;
    int min, pos;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (i == 0)
        {
            min = x;
            pos = 1;
        }
        else if (x < min)
        {
            min = x;
            pos = i + 1;
        }
    }

    printf("%d %d\n", min, pos);

    return 0;
}