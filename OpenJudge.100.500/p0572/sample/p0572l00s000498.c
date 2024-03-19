#include <stdio.h>
 
int main(void){ 
  long long L,R,n,m;
  scanf("%lld %lld",&L,&R);
  for(int i=L;i<=R;i++){
    if(i%2019==0){
      printf("0");
      return 0;
    }
  }
  n=L*R%2019;
  for(int i=L;i<=R;i++){
    for(int j=i+1;j<=R;j++){
      m=i*j%2019;
      if(n==1) break;
      if(m<n){
        n=m;
      }
    }
  }
  printf("%lld",n);
  return 0;
}