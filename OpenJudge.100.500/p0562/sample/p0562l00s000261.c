#include<stdio.h>
#include<stdlib.h>

#define NEW(p,n){p=malloc((n)*sizeof(p[0]));if(p==NULL){printf("not enough memory\n");exit(1);};}
//pの型の変数n個の要素分のメモリを確保し、そのアドレスをpに代入するマクロ

int main(void){
    int A;
    scanf("%d",&A);

    int B;
    scanf("%d",&B);

    int ans;
    if(B==1){
        ans=0;
    }
    else if(B<=A){
        ans=1;
    }
    else{
        ans=(B-A)/(A-1)+1;
        if((B-A)%(A-1)!=0){
            ans+=1;
        }
    }

    printf("%d\n",ans);

    return 0;
}