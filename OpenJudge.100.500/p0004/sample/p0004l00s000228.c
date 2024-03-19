#include <stdio.h>

main(){
  unsigned int a, b, temp1, temp2, ans1, ans2;
  int i;


  while(1){
    if(scanf("%d %d", &a, &b)==EOF) break;

    for(i=1;i<2000000000;i++){
      if(i%a==0 && i%b==0){
	ans2=i;
	break;
      }
    }
    if(a>=b) temp1=a;
    else temp1=b;
    for(i=temp1;i>0;i--){
      if(a%i==0 && b%i==0){
	ans1=i;
	break;
      }
    }

    printf("%d %d\n", ans1, ans2);
  }
  return 0;
}