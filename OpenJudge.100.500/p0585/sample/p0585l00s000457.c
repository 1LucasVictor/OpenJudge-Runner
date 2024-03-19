#include <stdio.h>

int main(){
    int i,A,B,T;
    int ans=0;
    scanf("%d %d %d",&A,&B,&T);
    for(i=1;i*A<(T+0.5);i++){
        ans +=B ;
    }
    printf("%d\n",ans);
    return 0;
}