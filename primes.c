/* primes.c */
/* 1～100の自然数の中から、素数を見つけ出して出力する */
#include <stdio.h>
#include <math.h>

#define N 100

int main(void) {
    int i, j, count = 0;
    
    /* iが素数ならarray[i] = 1 */
    /* iが素数でないならarray[i] = 0 */
    int array[N+1];

    /* arrayの初期化 */
    array[0] = 0; array[1] = 0;
    for (i = 2; i <= N; i++) {
        array[i] = 1;
    }

    /* 素数判定 */
    for (i = 2; i <= N; i++) {
        for (j = 2; j <= sqrt(i); j++) {
            if (i%j == 0)
                array[i] = 0;
        }
    }

    /* 得られた素数を表示する */
    for (i = 0; i <= N; i++) {
        if (array[i] == 1) {
            printf ("%3d", i);
            count++;

            if (count%10 == 0)
                printf ("\n");
        }
    }
    printf("\n");

    return 0;
}