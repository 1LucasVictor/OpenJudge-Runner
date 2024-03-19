#include <stdio.h>
#include <string.h>

int main(){
  char num[100000];
  int l,count_zero,count_one,ans;
  count_zero = count_one = 0;
  scanf("%s",num);
  l = strlen(num);

  for(int i = 0; i < l; i ++){
    if(num[i] == '0'){
      count_zero ++;
    }else{
      count_one ++;
    }
  }

  if(count_zero < count_one){
    ans = count_zero * 2;
  }else{
    ans = count_one * 2;
  }

  printf("%d",ans);

  return 0;
}
