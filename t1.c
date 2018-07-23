#include <stdio.h>

/*
 * コンピュータはデータを「どんな風に」格納しているか？
 */

int main() {
    // 元になるデータ
    int i = 10;
    //int i = 0x1ffff;
    //char c = 'a';
    //double f = 12.125;

    //
    char *ps;

    //
    ps = (char *)&i;
    //ps = (char *)&c;
    //ps = (char *)&f;

    // データの出力
    int counter;
    for(counter = 0; counter < 16; counter ++) {
        printf("%02x ", (unsigned char)ps[counter]);
    }
    printf("\n");

    //
    return 0;
}
