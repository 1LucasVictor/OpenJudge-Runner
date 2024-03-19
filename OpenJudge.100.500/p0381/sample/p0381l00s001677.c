#include <stdio.h>

int main()
{
    while(1){
        int n,x;
        scanf("%d %d",&n,&x);
        if(n==0 && x==0){
            break;
        }
        int combination = 0;
        int i,j,k;
        for(i=1;i<n-1;i++){
            for(j=i+1;j<n;j++){
                for(k=j+1;k<=n;k++){
                    if(i+j+k==x){
                        combination++;
                    }
                }
            }
        }
        printf("%d\n",combination);
    }
    return 0;
}
