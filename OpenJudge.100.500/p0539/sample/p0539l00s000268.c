#include<stdio.h>
int main(){
  int i,j,n;
  scanf("%d",&n);
  for(i=1;i<10;i++){
    j=n/i;
    if(j < 10)
      break;
  }
  if(i==10)
    printf("No");
  else
    printf("Yes");
  return 0;
}