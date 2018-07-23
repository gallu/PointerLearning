#include <stdio.h>

/*
 * 「関数」で、ポインタを渡してみる
 */

//void func(int *pi, char *pc, double *pf) {
void func(int* pi, char* pc, double* pf) {
    // データの出力
    printf("\n");
    printf("call:\t%08x\n", pi);
    printf("call:\t%08x\n", pc);
    printf("call:\t%08x\n", pf);
}

int main() {
    // 元になるデータ
    int i = 10;
    char c = 'a';
    double f = 12.125;

    // データの出力
    printf("base:\t%08x\n", &i);
    printf("base:\t%08x\n", &c);
    printf("base:\t%08x\n", &f);

    //
    func(&i, &c, &f);

    //
    return 0;
}
