#include <stdio.h>
#include <stdlib.h>
int main(void){
  int a,b,c,d,e,k,ans;
  ans=0;
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);
 int h[5]={a,b,c,d,e};
  for(int i=0;i<5;i=i+1){
    for(int ii=0;ii<5;ii=ii+1){
      if(abs(h[i]-h[ii])>k){
      ans=ans+1;
       printf(":(");
      }
    }
  }
  if(ans==0){
    printf("Yay!");
  }
    return 0;
  }