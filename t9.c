#include <stdio.h>

/*
 * ポインタの演算：インクリメントをしてみる
 */


int main() {
    int i = 0;
    int* pi = &i;
    char c = 'a';
    char* pc = &c;
    double f = 1.234;
    double* pf = &f;

    //
    printf("\n");
    printf("int:\t%08x\n", pi++);
    printf("int:\t%08x\n", pi++);
    printf("int:\t%08x\n", pi++);
    printf("int:\t%08x\n", pi++);
    //
    printf("\n");
    printf("char:\t%08x\n", pc++);
    printf("char:\t%08x\n", pc++);
    printf("char:\t%08x\n", pc++);
    printf("char:\t%08x\n", pc++);
    //
    printf("\n");
    printf("double:\t%08x\n", pf++);
    printf("double:\t%08x\n", pf++);
    printf("double:\t%08x\n", pf++);
    printf("double:\t%08x\n", pf++);

    printf("\n");
    //
    return 0;
}
