#include <stdio.h>
int main(){
    int A;
    int B;
    int ans;
    
    scanf("%d %d",&A,&B);
    
    if(A >= 1 && A <= 9){
        if(B >= 1 && B <= 9){
            ans = A*B;
            printf("%d",ans);
        }else{
            printf("-1");
        }
    }
}
