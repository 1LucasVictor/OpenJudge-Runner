#include<stdio.h>
int main(void){
  
  int i, count0, count1, ans, dst;
  char S[100000];
  scanf("%s",S);

  count0 = count1 = ans = 0;
  dst = strlen(S);
  for(i = 0; i < dst; ++i){
    if(S[i] == '0'){
      count0++;
    } else {
      count1++;
    }
  }
  
  ans = (count0 >= count1) ? count1: count0;
  printf("%d\n", 2 * ans);
  return 0;
}
