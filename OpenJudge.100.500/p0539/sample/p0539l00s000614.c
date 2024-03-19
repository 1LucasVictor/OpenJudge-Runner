#include<stdio.h>
int main(){
  int n,a,b,cnt=0;
  scanf("%d",&n);
  for(a=1; a<=9; a++){
    for(b=1; b<=9; b++){
      if(a*b==n){
        cnt++;
      }
    }
  }
  if(cnt==0){
    printf("No\n");
  }
  else{
    printf("Yes\n");
  }
  return 0;
}
