#include<stdio.h>
#include<math.h>

int main(void){
  int n,d,l,r,ans=0;
  
  scanf("%d %d",&n,&d);
  
  for(int i=0;i<n;i++){
    scanf("%d %d",&l,&r);
    if(l*l+r*r<=d*d) ans++;
  }
  printf("%d",ans);
}