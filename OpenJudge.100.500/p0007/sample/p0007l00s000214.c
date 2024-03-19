#include <stdio.h>

int main(){
  int i,j,k,n;
  while(scanf("%d",&n)!=EOF){
    int count=0;
    for (i=0;i<=9;i++){
      for (j=0;j<=9;j++){
        for (k=0;k<=9;k++){
          if ((0<=n-i-j-k) && (n-i-j-k<=9)){
            count++;
          }
        }
      }
    }
    printf("%d\n",count);
  }
  return 0;
}