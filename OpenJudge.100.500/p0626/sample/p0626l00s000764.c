#include<stdio.h>
#include<math.h>

int main(){
    int D, N;
    scanf("%d %d",&D, &N);
    int ans=pow(100,D)*N;
    printf("%d\n",ans);
    return 0;
}