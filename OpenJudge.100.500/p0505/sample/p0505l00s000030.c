#include<stdio.h>
int main(){
  int h,n;
  scanf("%d%d",&h,&n);
  int sum=0;
  int b;
  for(int i=0;i<n;i++){
    scanf("%d",&b);
    sum+=b;
  }
  if(sum<h)
    printf("No");
  else
    printf("Yes");
}
  
