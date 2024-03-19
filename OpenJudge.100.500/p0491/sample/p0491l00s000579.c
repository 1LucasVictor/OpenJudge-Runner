#include <stdio.h>
int main()
{
  int n,k,min;
  scanf("%d",&n); scanf("%d",&k);
    min=n;
    if(k==1){
        min=0;
    }
    else{
        n=n%k;
        while(1){
            n=n-k;
            if(n<0) n=-n;
            if(min<n) break;
            min=n;
        }
    }
  printf("%d",min);
  return 0;
}