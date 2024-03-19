#include <stdio.h>
int main(void){
    int x,n,sum,i,j,k;
    while(1){
        scanf("%d %d",&n,&x);
        int count = 0;
        if(n==0 && x==0){
            break;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    sum =i+j+k;
                    if(i<j && j<k &&x==sum){
                        count++;
                    }
                }
            }
        }
        printf("%d\n",count);
       
    }
    return 0;
}

