#include<stdio.h>
int main(){
int X, Y;
int i, ans = 0;

scanf("%d %d", &X, &Y);
for(i = 0; i <=X; ++i){
  if((2*i + 4*(X-i)) == Y){
    ans =1;
  }
}
if(ans == 0){
  printf("No");
}else{
  printf("Yes");
}
}
