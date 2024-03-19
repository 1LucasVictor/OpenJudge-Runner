#include<stdio.h>
int main(){
  int h,a;
  scanf("%d %d",&h,&a);
  int sum=0,var;
  for(int i=0;i<a;i++){
    scanf("%d",&var);
    sum+=var;
  }
  if(sum>=h)
    printf("Yes");
  else
    printf("No");
  return 0;
}