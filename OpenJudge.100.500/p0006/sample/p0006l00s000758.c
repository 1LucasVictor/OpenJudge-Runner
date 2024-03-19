#include <stdio.h>

int main(void){
  int n;
  scanf("%d",&n);
  int result = 100000;
  int i;
  int temp;
  for(i=0;i<n;i++){
    result = result*1.05;
    //¢
    temp = result % 1000;
    if(temp !=0){
      result = result -temp;
      result = result+1000;
    }
  }
  printf("%d\n",result);
  return(0);
}