#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            continue;  // 当i能被3整除时，跳过当前循环迭代，开始下一次迭代
        }

        printf("%d ", i);
    }

    return 0;
}
