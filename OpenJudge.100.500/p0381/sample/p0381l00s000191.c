#include <stdio.h>
int main(void){
    int n,x,y=0;
    int i, j, k;
    scanf("%d",&n);
    scanf("%d",&x);
for ( i=1 ;i<n;i++) {
    for ( j=i+1;j<n;j++) {
        for ( k=j+1;k<=n;k++) {
      if(i+j+k==x){
          y=y+1;
      }
      else if(n==0&&x==0)break;
    
        }
    }
}
          printf("%d\n",y);
}

