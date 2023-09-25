#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        if (i % 3 == 0) {
            i++;  // 需要在continue之前自增i，以避免无限循环
            continue;  // 当i能被3整除时，跳过当前循环迭代，开始下一次迭代
        }

        printf("%d ", i);
        i++;
    }

    return 0;
}
