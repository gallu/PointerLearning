#include <stdio.h>

/*
 * 「関数」で呼んだ時、呼び元と呼び先の「変数」はどこに格納されているか？
 */

void func(int i, char c, double f) {
    // データの出力
    printf("\n");
    printf("call:\t%08x\n", &i);
    printf("call:\t%08x\n", &c);
    printf("call:\t%08x\n", &f);
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
    func(i, c, f);

    //
    return 0;
}
