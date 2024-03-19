#include<stdio.h>
#include<stdlib.h>

#define NEW(p,n){p=malloc((n)*sizeof(p[0]));if(p==NULL){printf("not enough memory\n");exit(1);};}
//pの型の変数n個の要素分のメモリを確保し、そのアドレスをpに代入するマクロ

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void){
    int N;
    scanf("%d",&N);

    for(int i=1;i<10;i++){
        if(N%i==0){
            int S =N/i;
            if(S<10){
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}