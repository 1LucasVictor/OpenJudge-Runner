#include<stdio.h>

int main(void){
    int A,B,ans;
    scanf("%d",&A);
    scanf("%d",&B);

    if((0<A && A<10) && (0<B && B<10)){
        ans = A*B;
        printf("%d",ans);
    }
    else
    {
        ans = -1;
        printf("%d",ans);
    }
    
}