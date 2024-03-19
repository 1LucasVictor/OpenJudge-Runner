#include <stdio.h>
int main(void){
  int num[3] = {};
  int i=0,j5=0,j7=0;
  
  scanf("%d %d %d",&num[0],&num[1],&num[2]);
  for(i=0;i<3;i++){
    if(num[i]==5) j5++;
    if(num[i]==7) j7++;
  }
  
  if((j5==2)&&(j7==1)) printf("YES\n");
  else printf("NO\n");
  
  return 0;
}