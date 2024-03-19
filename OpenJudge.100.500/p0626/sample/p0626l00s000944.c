#include<stdio.h>
int main(){
  int a,b,ans = 1;
  scanf("%d %d",&a,&b);
  if(b > 99){
    b++;
  }
  for(int i = 0;i < a;i++){
    ans *= 100;
  }
  printf("%d\n",ans * b);
  return 0;
}