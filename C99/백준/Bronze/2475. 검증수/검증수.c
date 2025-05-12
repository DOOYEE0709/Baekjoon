#include <stdio.h>
#include <math.h>

int main(){
    int n1, n2, n3, n4, n5;

    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    int sum = pow(n1, 2) + pow(n2, 2) + pow(n3, 2) + pow(n4, 2) + pow(n5, 2);

    int result = sum % 10;

    printf("%d", result);

    return 0;
}