
#include<stdio.h>

int main(){
  int n,x,count;
  int i,j,k;

  while(1){
    scanf("%d %d", &n, &x);
    count = 0;
    if(n==0 && x==0){
      break;
    }
    for(i=1;i<=n;i++){
      for(j=i+1;j<=n;j++){
        if(i+j>=x){
          break;
        }
        for(k=j+1;k<=n;k++){
          if(i+j+k==x){
            count++;
            break;
          }
        }
      }
    }
    printf("%d\n",count);
  }

  return 0;
}

