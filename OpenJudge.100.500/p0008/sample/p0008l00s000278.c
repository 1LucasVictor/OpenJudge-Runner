#include <stdio.h>
int main(void)
{
    int i,j,limit=1000000,count;
    int prime[1000000];
    for(i=0;i<limit;i++){
        prime[i]=i;
    }
    for(i=2;i*i<limit;i++){
    if(prime[i]){
        for(j=i*2;j<limit;j+=i){
        prime[j]=0;
    }}}
    int n;
    while(scanf("%d",&n)!=EOF){
        count=0;
        for(i=2;i<=n;i++){
            if(prime[i]!=0){
                count++;
            }}
    printf("%d\n", count);
    }
    return 0;
}
