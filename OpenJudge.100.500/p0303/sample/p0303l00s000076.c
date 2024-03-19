#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10000

int main(){

  int n,k,i,w[N],total=0,x,a=0;

  scanf("%d %d",&n,&k );

  for(i=0 ; i<n ; i++){
    scanf("%d",&w[i]);
    total+=w[i];
  }

if(total%k==0) x=total/k;
else x=(total/k)+1;

for(i=0 ; i<n ; i++){
  a+=w[i];
  if(a>=x){
    if(abs(x-a)<abs(x-a+w[i])){
      x=a;
      a=0;
    }
    else a=w[i];
  }
}

printf("%d\n",x);

return 0;

}