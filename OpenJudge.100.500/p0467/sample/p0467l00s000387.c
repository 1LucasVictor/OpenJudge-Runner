#include <stdio.h>

int main(){
  int i,a[3],m=0,k;
  for(i=0;i<3;i++){
    scanf("%d",&a[i]);
  }
  scanf("%d",&k);
  for(i=0;i<3;i++){
    if(a[i]>=k){
      m+=k*(1-i);
      break;
    }
    m+=a[i]*(1-i);
    k-=a[i];
  }
  printf("%d",m);
  return(0);
}