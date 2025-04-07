#include <iostream>
#include <math.h>

int main() {
    int num;
    std::cin >> num;

    while(num--) {
        int x1, y1, r1;
        int x2, y2, r2;

        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        int sum_r = r1 + r2;
        int diff_r = abs(r1 - r2);

        if (distance == 0 && r1 == r2) {
            std::cout << -1 << std::endl;
        } else if (distance > sum_r || distance < diff_r) {
            std::cout << 0 << std::endl;
        } else if (distance == sum_r || distance == diff_r) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << 2 << std::endl;
        }
    }

    return 0;
}