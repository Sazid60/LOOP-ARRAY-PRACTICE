#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int a;
    scanf("%d", &a);
    int arr[a];
    int possum = 0;
    int negsum = 0;

    for (int i = 0; i < a; i++)
    {
        int x;
        scanf("%d", &x);

        if (x > 0)
        {
            possum += x;
        }
        else if (x < 0)
        {
            negsum += x;
        }
    }

    printf("%d %d", possum, negsum);

    return 0;
}
