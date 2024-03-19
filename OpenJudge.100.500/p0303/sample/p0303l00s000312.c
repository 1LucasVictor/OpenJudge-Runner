#include<stdio.h>
#include<stdlib.h>




int main(){
  int n,bus,i,muda,ans=0,sum=0,weight=0,mudajougen;
  int *W;
  scanf("%d %d",&n,&bus);
  W=malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    scanf("%d",&W[i]);
    sum+=W[i];
    if(ans<W[i]) ans=W[i];
  }
  if(ans< sum/bus) ans=sum/bus;
  while(1){
    muda=0;
    mudajougen=ans*bus-sum;
    for(i=0;i<n;i++){
      if(weight +W[i] <= ans) weight+=W[i];
      else{
        muda+=ans-weight;
        if(muda>mudajougen) break;
        weight=W[i];
      }
    }
    if(i==n) break;
    ans++;
  }
  printf("%d\n",ans);
  return 0;
}