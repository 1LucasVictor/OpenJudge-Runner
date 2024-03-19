#include <stdio.h>
int main(void){
    int n,x,i,j,k,y,z=0;
    
    scanf("%d %d",&n,&x);
    
    for(i=1;i<=n-2;i++){
        for(j=i+1;j<=n-1;j++){
            for(k=j+1;k<=n;k++){
                y=i+j+k;
                if(y==x && i!=j && j!=k && k!=i){
                    z=z+1;
                }
            }
        }
    }
    printf("%d\n",z);
  return 0;
}

