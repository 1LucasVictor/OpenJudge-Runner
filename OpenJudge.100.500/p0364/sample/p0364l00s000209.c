#include<stdio.h>
int main(){
int W,H,x,y,r;

scanf("%d", &W);
scanf("%d", &H);
scanf("%d", &x);
scanf("%d", &y);
scanf("%d", &r);

if((H-y)>=y&&(W-x)>=x&&x>=r&&y>=r){
printf("Yes\n");
}else{
printf("No\n");

}
  
return 0;
}