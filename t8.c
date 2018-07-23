#include <stdio.h>

/*
 * 「関数」の呼び先でデータを変更してみる(けど無意味)
 */

void func(int* i) {
    // 変数に値を代入する
    *i = 100;
    printf("func:\t%d\n", *i);
}


int main() {
    int i = 0;
    printf("base:\t%d\n", i);

    // 関数を呼ぶ
    func(&i);

    //
    printf("base:\t%d\n", i);

    //
    return 0;
}
