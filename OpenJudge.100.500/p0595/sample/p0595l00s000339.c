#include<stdio.h>
int main(){
  int a,b,k,cnt = 0;
  scanf("%d %d %d",&a,&b,&k);
  for(int i = 1;;i++){
    if(a % i < 1 && b % i < 1){
      cnt++;
      if(cnt == k){
        printf("%d",i);
        return 0;
      }
    }
  }
  return 0;
}