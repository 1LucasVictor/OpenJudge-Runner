#include <stdio.h>

#define N 10000

int main(){

  int n,k,i,w[N],total=0,x;

  scanf("%d %d",&n,&k );

  for(i=0 ; i<n ; i++){
    scanf("%d",&w[i]);
    total+=w[i];
  }

if(total%k==0) x=total/k;
else x=(total/k)+1;

printf("%d\n",x);

return 0;

}