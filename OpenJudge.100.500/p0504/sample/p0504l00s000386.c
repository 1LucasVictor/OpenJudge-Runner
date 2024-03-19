#include<stdio.h>

int main(){
  int h,a,ans = 0;
  
  scanf("%d",&h);
  scanf("%d",&a);

  while(h > 0){
    h -= a;
    ans++;
  }

  printf("%d\n",ans);

  return 0;
}
