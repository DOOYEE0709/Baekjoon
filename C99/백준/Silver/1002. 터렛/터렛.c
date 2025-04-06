#include <stdio.h>
#include <math.h>

int main() {
    int num; // 테스트 갯수

    scanf("%d", &num);

    // ryu의 가능한 위치좌표 갯수 찾기
    while(num--) { // 0이면 false로 동작 중지
        int x1, y1, r1; // cho
        int x2, y2, r2; // beak

        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        int sum_r = r1 + r2;
        int diff_r = abs(r1 - r2);

        if (distance == 0 && r1 == r2) {
            printf("-1\n");
        } else if (distance > sum_r || distance < diff_r) {
            printf("0\n");
        } else if (distance == sum_r || distance == diff_r) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }

    return 0;
}
