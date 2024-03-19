#include <stdio.h>

main(){
  int a, b, m, n, temp1, ans1, ans2;
  int i;


  while(1){
    if(scanf("%d %d", &a, &b)==EOF) break;
    m=a;
    n=b;
    while(1){
      temp1=a%b;
      if(temp1==0){
	ans1=b;
	break;
      }
      a=b;
      b=temp1;
    }

    ans2=(double)m*((double)n/(double)ans1);
    printf("%d %d\n", ans1, ans2);
  }
  return 0;
}