#include <stdio.h>

/*
 * 変数に値を代入、からの「ポインタで指示した先」に値を代入
 */

int main() {
    int i = 0;
    int* pi;

    // 変数に値を代入
    i = 100;
    printf("%d\n", i);

    // ポインタを代入
    pi = &i;

    // ポインタにデータを代入：XXXXXX 危険すぎるから絶対にやっちゃだめ！！！！！！
    //pi = 300;
    
    // 「ポインタで指示した先」にデータを代入
    *pi = 200;
    printf("%d\n", *pi);
    //
    printf("%d\n", i);

    //
    return 0;
}
