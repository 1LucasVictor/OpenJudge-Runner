#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 100
#define rep(i, N) for (i = 0; i < N; i++) //制御変数iを用いてN回転
#define array(N, t) ((t)*)calloc(N, sizeof(t)) //t型N要素の配列を動的確保後0クリア(freeを忘れずに)
#define zero(a); {int iter; rep(iter, sizeof(a)/sizeof((a)[0])) (a)[iter]=0;} //1次元配列aのゼロ初期化?
typedef long long ll;
void printa_int(int *a, int size); //int型の1次元配列aを出力(for debug)

int main() {
    char S[11];
    char T[12];
    int i;
    scanf("%s\n%s", S, T);
    for (i = 0; i < 11; i++) {
        if (!S[i]) {
            printf("Yes\n");
            break;
        } else if (S[i] != T[i]) {
            printf("No\n");
            break;
        }
    }
    return 0;
}

void printa_int(int *a, int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d, ", a[i]);
    printf("\n");
}