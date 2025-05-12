#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", a + b - c);

    char a_str[10], b_str[10], ab_str[20];
    sprintf(a_str, "%d", a);
    sprintf(b_str, "%d", b);

    strcpy(ab_str, a_str);
    strcat(ab_str, b_str);

    int ab = atoi(ab_str);
    printf("%d\n", ab - c);

    return 0;
}
