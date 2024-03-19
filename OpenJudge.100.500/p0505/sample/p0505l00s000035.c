#include <stdio.h>
#define rep(i,n) for(int i=0; i<n; i++)
int main(void){
  int sum=0;
  int h,n;
  scanf("%d%d",&h,&n);
  rep(i,n){
    int a=0;
    scanf("%d",&a);
    sum+=a;
  }
  sum>=h?printf("Yes"):printf("No");
  return 0;
}