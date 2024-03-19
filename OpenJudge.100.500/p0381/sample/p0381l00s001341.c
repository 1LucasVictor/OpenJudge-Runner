#include <stdio.h>

int main() {

    int i,j,k,n,x,count=0;

    while(1){
        scanf("%d %d",&n,&x);
        if(n==0&&x==0)
            break;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                for(k=1;k<=n;k++){
                    if(i+j+k==x && i!=j && j!=k && k!=i)
                            count++;
                    
                }
            }
        }
    
printf("%d\n",count/6);

}

return 0;

}