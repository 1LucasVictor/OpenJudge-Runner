#include <stdio.h>

main(){
  int a, b;
  int c;
  int ans;

  while(1){
    if(scanf("%d %d", &a, &b)==EOF) break;
    c=a+b;
    ans=1;
    while(1){
      if((c/10)<1) break;
      else{
	ans++;
	c/=10;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}