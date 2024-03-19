#include <stdio.h>

int main(){
  int x, y;  scanf("%d %d", &x, &y);
  int t, k;
  int ans = 0;
  if((y-x*2)%2==0 && (x*4-y)%2==0){
    t = (x*4-y)/2;
    k = (y-x*2)/2;
    if(t>=0 && k>=0)  ans = 1;
  }
  
  


  if(ans)  printf("Yes\n");
  else     printf("No\n");

  return 0;
}
