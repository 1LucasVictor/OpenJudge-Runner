#include<stdio.h>
#include<math.h>
 
int main(){
  int n, d, count=0;
  scanf("%d", &n);
  scanf("%d", &d);
  for(int i=0;i<=n; i++){
    int x, y;
    scanf("%d",&x);
    scanf("%d", &y);
    if(sqrt(x*x+y*y)<=d)count++;
  }
  printf("%d", count);
  return 0;
}