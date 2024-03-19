#include <stdio.h>
int main(void){    
    int n,x,i,j,k,count=0;

    while(1){
         scanf("%d %d", &n,&x);
        if(n==0 && x==0)break;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    if(i!=j && j!=k && i!=k && i+j+k==x){
                        count++;
                    }
                }
            }
        }
    printf("%d\n",count/6);
    count==0;
    }
    return 0;
}

