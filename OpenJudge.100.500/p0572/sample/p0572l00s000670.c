#include<stdio.h>
#include<stdlib.h>

#define NEW(p,n){p=malloc((n)*sizeof(p[0]));if(p==NULL){printf("not enough memory\n");exit(1);};}
//pの型の変数n個の要素分のメモリを確保し、そのアドレスをpに代入するマクロ

#define N 2019

int main(void){
    int L,R;
    scanf("%d %d",&L, &R);

    int ans;
    if((R-L)>=N){
        ans=0;
    }
    else{
        int l,r;
        l=L%N;
        r=R%N;
        if(l<r){
            ans=l*(l+1);
        }
        else{
            ans=0;
        }
    }

    printf("%d\n",ans);

    return 0;
}