#include <stdio.h>

int main()
{
    int a, b, c;
    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);

        if ((a == 0) && (b == 0) && (c == 0))
        {
            break;
        }

        int max = a;

        if (b > max)
        {
            max = b;
        }

        if (c > max)
        {
            max = c;
        }

        int x, y;
        if (max == a)
        {
            x = b;
            y = c;
        }
        else if (max == b)
        {
            x = a;
            y = c;
        }
        else
        {
            x = a;
            y = b;
        }

        if ((max * max) == (x * x) + (y * y))
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }

    return 0;
}