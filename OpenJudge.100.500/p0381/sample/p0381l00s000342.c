

#include <stdio.h>
 
int main(void){
    int n,x,i,j,k;
    while(1){
    int c=0;
    scanf("%d %d",&n,&x);
    if(n==0 && x==0){
        break;
    }
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            for(k=j+1;k<=n;k++){
                if(i+j+k==x){
                    c++;
                }
            }
        }
    }
    printf("%d\n",c);
    }
    return 0;
}
 