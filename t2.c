#include <stdio.h>

/*
 * コンピュータはデータを「どこに」格納しているか？
 */

int main() {
    // 元になるデータ
    int i = 10;
    int i2 = 10;
    char c = 'a';
    char c2 = 'a';
    double f = 12.125;
    double f2 = 12.125;

    // データの出力
    printf("%08x\n", &i);
    printf("%08x\n", &i2);
    printf("%08x\n", &c);
    printf("%08x\n", &c2);
    printf("%08x\n", &f);
    printf("%08x\n", &f2);

    //
    return 0;
}
