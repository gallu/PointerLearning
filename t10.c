#include <stdio.h>

/*
 * 「配列」のポインタを確認してみる
 */


int main() {
    int i[10];
    int* pi = i;
    char c[10];
    char* pc = c;

    // ポインタ位置の確認
    printf("&i[0]:\t%08x\n", &i[0]);
    printf("i:\t%08x\n", i);
    printf("&i[1]:\t%08x\n", &i[1]);
    printf("++pi:\t%08x\n", ++pi);
    printf("&i[2]:\t%08x\n", &i[2]);
    printf("++pi:\t%08x\n", ++pi);
    printf("\n");

    printf("&c[0]:\t%08x\n", &c[0]);
    printf("c:\t%08x\n", c);
    printf("&c[1]:\t%08x\n", &c[1]);
    printf("++pc:\t%08x\n", ++pc);
    printf("&c[2]:\t%08x\n", &c[2]);
    printf("++pc:\t%08x\n", ++pc);
    printf("\n");

    //
    /*
    char* s = "abcdefg";
    while(*s != '\0') {
        printf("%c\n", *s);
        s ++;
    }
    */


    //
    return 0;
}
