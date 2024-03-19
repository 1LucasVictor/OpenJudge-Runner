#include <stdio.h>
#define N_MAX 110

int main(){
    
    int N, A[N_MAX];
    
    //標準入力から読み込み
         scanf("%d", &N);
         for ( int i=0; i<N; i++ ){
             scanf("%d",&A[i]);
         }
    
         for ( int i=0; i<N; i++ ){
             if ( A[i] % 2 == 0 ){
                 if ( A[i] % 3 != 0 && A[i] % 5 != 0 ){
                     printf("DENIED\n");
                     return 0;
                 }
             }
         }
         
         printf("APPROVED\n");
         return 0;
}