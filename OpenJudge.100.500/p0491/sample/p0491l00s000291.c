#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,k;
  	scanf("%d %d",&n,&k);
  	int n1,n2;
      n1=n%k;
      n2=k-n1;
  if(n1<=n2){
    printf("%d\n",n1);
    return 0;
  }
  else
    printf("%d\n",n2);
  
}