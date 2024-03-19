#include<stdio.h>
int main(){
  unsigned x;
  int count1=0, count2=0;
  scanf("%u", &x);
  while(x>=500){
    x=x-500;
    count1++;
  }
  if(x>0){
    while(x>=5){
      x=x-5;
      count2++;
    }
  }
  printf("%d",count1*1000+count2*5);
  return 0;
}
  
