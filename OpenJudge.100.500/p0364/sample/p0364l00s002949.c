#include<stdio.h>
int main(){
int W,H,x,y,r;
scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
if(r+x<=W&&r+y<=H&&x-r>=0&&y-r>=0){
printf("Yes\n");
}
else{
printf("No\n");
}
return 0;
}