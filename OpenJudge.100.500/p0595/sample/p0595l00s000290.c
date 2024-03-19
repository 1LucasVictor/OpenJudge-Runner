#include<stdio.h>
int main(void){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  
  int ans, i;
  int cnt = 1;
  int mae = 2;
  if(c == cnt){
    printf("%d\n", cnt);
    return 0;
  }
  
  for(i = 2; i <= 100; i++){
    ans = a % i;
    if(ans == 0 || i % mae == 0){
      ans = b % i;
      if(ans == 0 || i % mae == 0){
        mae = i;
        cnt++;
        if(cnt == c){
          printf("%d\n", i);
          break;
        }
      }        
    }
  }
  return 0;
}