#include<stdio.h>
int main(void){
    int n,x,i,j,k,sum=0,count=0;
    while(scanf("%d %d",&n,&x)==2){
        if(n==0 && x==0) break;
        for(i=1;i<=n-2;i++){
            for(j=i+1;j<=n-1;j++){
                for(k=j+1;k<=n;k++){
                    sum=i+j+k;
                    if(sum==x) {
                    count++;}
                }
            }
        }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}
