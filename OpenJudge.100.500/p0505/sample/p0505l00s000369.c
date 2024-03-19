#include<stdio.h>
#include <sysexits.h>
#include<stdlib.h>
#include<math.h>

int main(void){
  int ans,N,i;
  long H;
  int a[100000]={};
  //printf("error");
  if(scanf("%ld %d",&H,&N)>2){
    exit(0);
  }
  for(i=0;i<N;i++){
   if(scanf("%ld",&a[i])>1){
    exit(0);
   }
  }
  ans=0;

  for(i=0;i<N;i++){
    ans+=a[i];
  }
  if(ans>=H){
    printf("Yes");
  }
  else{
    printf("No");
  }
  return 0;
}
