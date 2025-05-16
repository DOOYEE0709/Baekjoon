#include <stdio.h>
#define MAX 6
int main()
{
    int N;
    int num[MAX];
    int T, P;
    int temp = 0;

    scanf("%d", &N);

    while (1)
    {
        if (temp == MAX)
        {
            break;
        }

        scanf("%d", &num[temp]);

        temp++;
    }

    scanf("%d %d", &T, &P);

    int countT = 0;

    for (int i = 0; i < MAX; i++)
    {
        if (num[i] % T != 0)
        {
            countT += (num[i] / T) + 1;
        }
        else
        {
            countT += num[i] / T;
        }
    }

    int countP = N / P;
    int countPper = N % P;

    printf("%d\n%d %d\n", countT, countP, countPper);

    return 0;
}