#include<stdio.h>

int main(){
  int k,a,b,ans=0;
  int i;
  scanf("%d",&k);
  scanf("%d %d",&a,&b);

  for(i=a;i<=b;i++){
    if(i%k==0)
      ans++;
  }
  if(ans==0)
    printf("NG");
  else
    printf("OK");
}