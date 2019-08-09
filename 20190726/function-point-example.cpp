//
// Created by jaco.ryu on 2019-07-26.
//
#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int minus(int x, int y) {
    return x - y;
}

int main() {
    int x, y;
    printf("두개의 정수를 입력하시오:");
    scanf("%d%d", &x, &y);

    printf("%d + %d = %d\n", x, y, add(x , y));
    printf("%d - %d = %d\n", x, y, minus(x , y));

    int (*calc)(int, int);

    calc = add;
    printf("%d + %d = %d\n", x, y, calc(x , y));

    calc = minus;
    printf("%d - %d = %d\n", x, y, calc(x , y));

    return 0;

}

