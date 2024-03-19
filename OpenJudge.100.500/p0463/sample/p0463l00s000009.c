#include<stdio.h>
int main(){
  int n,temp;
  scanf("%d",&n);
  temp = n%10;
  if(temp == 0 || temp == 1 || temp == 6 
     || temp == 8)
    printf("pon");
  else if (temp == 3)
    printf("bon");
  else
    printf("hon");
  return 0;
}