#include <stdio.h>

int main(void){
    int K,A,B,a,b,ans;
    
    scanf("%d",&K);
    scanf("%d",&A);
    scanf("%d",&B);
    
    b=B/K;
    a=A/K;
    ans=b-a;
    
    if(A%K==0){
        ans++;
    }
    
    if(ans>0){
        printf("OK\n");
    }else{
        printf("NG\n");
    }
    
    return 0;
}