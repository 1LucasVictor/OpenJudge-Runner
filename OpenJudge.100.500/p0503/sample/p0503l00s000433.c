//ABC154_C-Distinct or not
//N個の整数列のうち、どの２つの要素も互いに異なるならば'YES'、そうで無いなら'NO'を出力するプログラム
// 2 <= N <= 200,000,   1 <= A_i <= 10^9

//入力
//*N
//*A_1 A_2 ... A_N


#include <stdio.h>
#define N_MAX 200000

int main () {
    
    int N;
    int A[N_MAX];
    
    //N,A[]を取得
    scanf("%d",&N);
    for ( int i=0; i<N; i++ ){
        scanf("%d",&A[i]);
    }
    
    //隣り合う数同士をfor二重ループで比較
    for ( int i=0; i<N-1; i++ ){
        for ( int j=i+1; j<N; j++ ){
            
            if ( A[i] == A[j] ){
                printf("NO\n");
                return 0;
              
            }
            
        }
    }
    
    printf("YES\n");
    return 0;
    
}
