#include<stdio.h>
#include<math.h>
 
int main(){
  int n, d, count=0;
  scanf("%d %d", &n, &d);
  for(int i=0;i<=n; i++){
    int x, y;
    scanf("%d %d",&x, &y);
    if(sqrt(x*x+y*y)<=d)count++;
  }
  printf("%d", count);
  return 0;
}