#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 10) {
        if (i % 3 == 0) {
            i++;  // ��Ҫ��continue֮ǰ����i���Ա�������ѭ��
            continue;  // ��i�ܱ�3����ʱ��������ǰѭ����������ʼ��һ�ε���
        }

        printf("%d ", i);
        i++;
    }

    return 0;
}
