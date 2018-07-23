#include <stdio.h>

/*
 * 「ポインタのポインタ」？
 */


int main() {
    int i = 100;
    int* pi = &i;
    int** ppi = &pi;
    int*** pppi = &ppi;

    //
    printf("&i:\t%08x\n", &i);
    printf("&pi:\t%08x\n", &pi);
    printf("&ppi:\t%08x\n", &ppi);
    printf("&pppi:\t%08x\n", &pppi);

    // 「ポインタのポインタのポインタ」への代入
    printf("\n");
    printf("%d\n", i);
    ***pppi = 100;
    printf("%d\n", i);

    //
    return 0;
}
