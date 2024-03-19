#include <stdio.h>
int main(){
    int N,ans;
    scanf("%d",&N);
    ans=N/2+N%2;
    printf("%d\n",ans);
    return 0;
}