#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,k;
  	scanf("%d %d",&n,&k);
  	int n1,n2;
  if(n>=k){
      n1=n%k;
      n2=abs(k-n1);
  }
  else{
    n1=abs(k-n);
    n2=n1%k;
  } 
  if(n1<=n2&&n1<=n){
    printf("%d\n",n1);
    return 0;
  }
  else if(n<=n2)
    printf("%d\n",n);
  else
    printf("%d\n",n2);
  
}