#include <stdio.h>

/*
 * 「関数」自体もポインタになる
 */


int func_1(int i) {
    printf("call func_1: %d\n", i * 2);
}
int func_2(int i) {
    printf("call func_2: %d\n", i / 2);
}

int main() {
    int (*fp)(int);

    //
    fp = func_1;
    (*fp)(100);

    //
    fp = func_2;
    (*fp)(100);


    //
    return 0;
}
