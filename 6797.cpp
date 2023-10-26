//判断一个是不是三角形，并判断是否为等腰三角形或等边三角形
#include <stdio.h>
int main() {
    double a, b, c;
    while ((scanf("%lf%lf%lf", &a, &b, &c)) != EOF) {
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                printf("Equilateral triangle!\n");
            } else if (a != b && a != c && b != c) {
                printf("Ordinary triangle!\n");

            } else {
                printf("Isosceles triangle!\n");
            }
        }
        else {
        printf("Not a triangle!\n");
        }
    }
    return 0;
} 
