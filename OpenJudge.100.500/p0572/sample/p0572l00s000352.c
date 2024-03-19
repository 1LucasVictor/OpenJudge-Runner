#include<stdio.h>

int main(){
  long long L = 0;
  long long R = 0;
  long long  i = 0;
  long long j = 0;
  long long ans = 0;
  long long min = -1;
  scanf("%lld %lld",&L,&R);
  if(R-L>=2019){
    min = 0;
  }else{
    for(i=0;L+i<R;i++){
      for(j=i+1;L+j<=R;j++){
        ans = (((L+i)%2019)*((L+j)%2019))%2019;
        //printf("%ld/",ans);
        if(ans < min || min == -1){
          min = ans;
        }
      }
    }
  }
  printf("%lld",min);
  return 0;
}