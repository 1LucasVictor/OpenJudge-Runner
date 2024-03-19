#include <stdio.h>
  
int main(void){
int W,H,x,y,r;
scanf("%d %d %d %d %d\n",&W,&H,&x,&y,&r);
if((W>(x+r))&&(x>r)&&(H>(y+r))&&(y>r)) {
printf("Yes\n");
}
else{
printf("No\n");
}
return 0;
}