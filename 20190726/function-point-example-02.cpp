//
// Created by jaco.ryu on 2019-07-26.
//

#include <stdio.h>
int show( int (*pf)() ) {
    return pf();
}

int showArg(int (*pf)(int, int), int x, int y) {
    return pf(x, y);
}

int return1() {
    return 1;
}

int return2() {
    return 2;
}

int add(int x, int y) {
    return x + y;
}

int main() {
    int (*calc)() = return1;
    printf("%d", show(calc));

    int (*calc1)(int x, int y) = add;
    printf("%d", showArg(calc1(3, 4)));
    return 0;
}

