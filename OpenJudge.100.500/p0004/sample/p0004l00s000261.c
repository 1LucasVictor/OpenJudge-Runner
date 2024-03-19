#include <stdio.h>

main(){
  unsigned int a, b, temp1, temp2, temp3, ans1, ans2;
  int i;


  while(1){
    if(scanf("%d %d", &a, &b)==EOF) break;
    
    if(a>=b){
      temp1=b;
      temp2=a;
    }
    else{
      temp1=a;
      temp2=b;
    }

    for(i=temp2;i>0;i--){
      if(a%i==0 && b%i==0){
	ans1=i;
	break;
      }
    }
    for(i=1;;i++){
      temp3=i*ans1;
      if(temp3%a==0 && temp3%b==0){
	ans2=temp3;
	break;
      }
    }
    
    printf("%d %d\n", ans1, ans2);
  }
  return 0;
}