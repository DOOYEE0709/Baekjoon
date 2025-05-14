#include <stdio.h>
#define MAX 80

int main()
{
    int test_num;
    char str[MAX];

    scanf("%d", &test_num);

    for (int i = 0; i < test_num; i++)
    {
        int sum = 0, count = 1, str_num = 0;

        scanf("%s", str);

        while (str[str_num] != '\0')
        {
            if (str[str_num] == 'O')
                sum += count++;
            else
                count = 1;
            str_num++;
        }

        printf("%d\n", sum);
    }

    return 0;
}