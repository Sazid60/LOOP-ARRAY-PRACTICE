#include <stdio.h>

int main()
{
    int a;
    int last;
    int first;

    scanf("%d", &a);

    last = a % 10;
    first = a / 10;

    if ((last != 0 && first % last == 0) || 
        (first != 0 && last % first == 0)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}