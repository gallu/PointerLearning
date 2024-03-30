#include <stdio.h>

/*
 * 「関数」の呼び先でデータを変更してみる
 */

void func(int* i) {
    // 変数に値を代入する
    *i = 100;
    printf("func(%08x):\t%d\n", i, *i);
}


int main() {
    int i = 0;
    printf("base(%08x):\t%d\n", &i, i);

    // 関数を呼ぶ
    func(&i);

    //
    printf("base(%08x):\t%d\n", &i, i);

    //
    return 0;
}
