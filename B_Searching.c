#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int X;
    scanf("%d", &X);

    for (int i = 0; i < a; i++) {
        if (arr[i] == X) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
    
    return 0;
}