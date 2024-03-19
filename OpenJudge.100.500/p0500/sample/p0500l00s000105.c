#include<stdio.h>
int main(void){
    int N, M, d, e, check = 0, keta, jyousuu, i;
    scanf("%d", &N);
    scanf("%d", &M);
    int s[M], c[M], A[N];
    for(i = 0; i < M; i++){
        scanf("%d", &s[i]);
        scanf("%d", &c[i]);
    }
    //事前準備として、答えのもとになるA[N]を初期化
    for(i = 0; i < N; i++){
        A[i] = 0;
    }
    //まずs[M]を基準に降順にしたい
    for(i = 0; i < M; i++){
        for(int j = i + 1; j < M; j++){
            if(s[i] < s[j]){
                d = s[i];
                s[i] = s[j];
                s[j] = d;
                d = c[i];
                c[i] = c[j];
                c[j] = d;
            }
        }
    }
    //入力で同じ桁に異なる数値が定義されていないかチェック
    for(i = 0; i < M - 1; i++){
        e = i + 1;
        if(s[i] == s[e]){
            if(c[i] != c[e]){
                printf("-1\n");
                check += 1;
            }
        }
    }
    //入力される最大桁数がNより大きいと絶対にアウト
    if(N < s[0]){
        printf("-1\n");
        check += 1;
    }
    else{
    //(N-1)桁目から指定されてる最大桁数までの数を0に
    if(s[0] > 1){
       A[0] = 1;
       for(i = 1; i < s[0]; i++ ){
           A[i] = 0;
       } 
    }
    //あとは各桁どんどん代入してく
    for(i = 0; i < M; i++){
        keta = s[i] - 1;
        A[keta] = c[i];
    }
    //最後にcheckを活用し、エラーがなければ答えを出力
    if(check == 0){
        int a = 0, x;
        for(i = 0; i < N; i++){
            jyousuu = 1; x = N - i - 1;
            for(int k = 0; k < i; k++) jyousuu *= 10;
            a += A[x] * jyousuu;
        }
        printf("%d", a);
    }
    }
    return 0;

}