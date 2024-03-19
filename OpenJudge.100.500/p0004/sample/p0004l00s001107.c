#include<stdio.h>
int main(){
  int a,b,i,ans1,ans2;
  while(scanf("%d %d",&a,&b)!=EOF){
    for(i=2;i<a;i++){
      if(a%i==0 && b%i==0){
	ans1 = i;
      }
    }
    ans2 = a/ans1*b;
    printf("%d %d\n",ans1,ans2);
  }
  return 0;
}