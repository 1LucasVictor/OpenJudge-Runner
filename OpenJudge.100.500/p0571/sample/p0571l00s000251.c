#include<stdio.h>
int main(){
int n,a,b;
int ans;
scanf("%d %d %d",&n,&a,&b);
  ans=n*a;
  if(ans>n*b){
    ans=n*b;
  }
printf("%d",ans);
return 0;
}