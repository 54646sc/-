#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i % 3 == 0) {
            continue;  // ��i�ܱ�3����ʱ��������ǰѭ����������ʼ��һ�ε���
        }

        printf("%d ", i);
    }

    return 0;
}
