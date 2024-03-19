#include<stdio.h>
#include<math.h>

int main(){
  int d,n,ans;
  
  scanf("%d %d",&d,&n);
  
  ans=n*pow(100,d);
  printf("%d\n",ans);
}