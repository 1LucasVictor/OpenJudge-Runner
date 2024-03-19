#include<stdio.h>
int main(){
  int h,n;
  int sum = 0;
  scanf("%d %d\n",&h,&n);
  for(int i=0;i<n;i++){
    int temp;
    scanf("%d ",&temp);
    sum+=temp;
  }
  if(sum>=h)printf("Yes");
  else printf("No");
  return 0;
}