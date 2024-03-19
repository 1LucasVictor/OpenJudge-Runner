#include <stdio.h>

main(){
  int a, b, ans;
  int cnt;
  while((scanf("%d %d", &a, &b))!=EOF){
    cnt=0;
    ans=a+b;
    while(ans>0){
      cnt++;
      ans=ans/10;
    }
    printf("%d\n",  cnt);
  }
}