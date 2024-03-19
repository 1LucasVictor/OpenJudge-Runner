#include<stdio.h>

int main(){
  char num;
  int i, sum;

  while(1){
    sum=0;

    for(i=0;i<1001;i++){
      scanf("%c",&num);
      if(num==10) break;
      sum+=num-48;
    }
    if(sum==0) break;
    printf("%d\n",sum);
  }
  
  return 0;
}


