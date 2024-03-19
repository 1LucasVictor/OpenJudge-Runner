#include<stdio.h>

int main(void){
  int num[3];
  int five_count,seven_count;

  five_count=0;
  seven_count=0;

  scanf("%d",&num[0]);
  scanf("%d",&num[1]);
  scanf("%d",&num[2]);
  
  for(int i=0;i<3;i++){
    if(num[i]==5)five_count++;
    if(num[i]==7)seven_count++;
  }

  if(five_count==2 && seven_count==1){
    printf("YES");
  }else printf("NO");

  return 0;
}