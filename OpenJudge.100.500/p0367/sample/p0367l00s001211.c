#include<stdio.h>
int main(){
  int a,b,c,ans=0;
  scanf("%d %d %d",&a,&b,&c);
  while(a<=b){
    if(c%a==0){
      ans=ans+1;
    }
    a=a+1;
  }
  printf("%d\n",ans);
  return 0;
}