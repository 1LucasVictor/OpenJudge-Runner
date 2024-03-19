#include<stdio.h>

int main(){
  long L = 0;
  long R = 0;
  long i = 0;
  long j = 0;
  long ans = 0;
  long min = -1;
  scanf("%ld %ld",&L,&R);
  if(R-L>=2019){
    ans = 0;
  }else{
    for(i=0;L+i<=R;i++){
      for(j=i+1;L+j<=R;j++){
        ans = (((L+i)%2019)*((L+j)%2019))%2019;
        //printf("%ld/",ans);
        if(ans < min || min == -1){
          min = ans;
        }
      }
    }
  }
  printf("%ld",min);
  return 0;
}