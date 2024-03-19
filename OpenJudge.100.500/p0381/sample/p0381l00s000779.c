#include <stdio.h>



 int main(){

  int n,x;
  int count;
  int i,j,k;

  while(1){
    count =0;
    scanf("%d %d",&n,&x);
    if(n==0 && x==0)break;

    for (i = 1; i <= n; i++){
      for (j = i+1; j<=n ;j++) {
        for(k = j+1;k<=n;k++){
          if(i+j+k==x && i<j && j<k){
            count = count+1;
          }
      }
    }
  }

  printf("%d\n",count);



}


return(0);
}