#include <stdio.h>
int main(void){
    int n,x;
    while(1){
        scanf("%d %d",&n,&x);
        if(n==0 && x==0) break;
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=2;j<=n-1;j++){
                for(int k=3;k<=n-2;k++){
                    if(i!=j && j!=k && k!=i)
                    if(i+j+k==x) count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
