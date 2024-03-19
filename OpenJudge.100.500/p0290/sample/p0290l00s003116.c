#include<stdio.h>
int main(){
  int n,ans1=0,ans2;
  scanf("%d",&n);
  if(n<=0||n>10000)return 0;
  int a,i,j;
  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(a<2||a>100000000)return 0;
    if(a==2){
      ans1++;
    }
    if(a==3){
      ans1++;
    }
    if(a%2==0);
    else if(a%3==0);
    else{
      ans2=0;
      for(j=5;j<a;j=j+2){
	if(a%j==0)ans2++;
      }
      if(ans2==0){ans1++;
      }
      }
  }
  printf("%d\n",ans1);
  return 0;
}

