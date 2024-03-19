#include <stdio.h>
int main(void){
    int n,x,i,j,k,y,z=0;
    while(1){
    scanf("%d %d",&n,&x);
    if (n==0 && x==0) break;  
        for(i=1;i<=n-2;i++){
            for(j=i+1;j<=n-1;j++){
                for(k=j+1;k<=n;k++){
                    y=i+j+k;
                    if(y==x){
                        z=z+1;
                    }
                }
            }
        }
    }
    printf("%d\n",z);
  return 0;
}

