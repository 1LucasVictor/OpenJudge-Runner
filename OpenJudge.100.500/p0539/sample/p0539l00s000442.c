#include<stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  for(int i=1;i<10;i++){
    if(n%i==0){
      if(n/i<10){
        puts("Yes");
        return 0;
      }
    }
  }
  puts("No");
  return 0;
}