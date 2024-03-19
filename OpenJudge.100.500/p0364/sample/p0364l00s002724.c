#include<stdio.h>
int main()
{
int w,h,x,y,r;
scanf("%d %d %d %d %d",&w,&h,&x,&y,&r);
if(w>=(x+r)&&h>=(y+r)&&(x-r)>=0&&(y-r)>=0){
printf("Yes\n");
}else{
printf("No\n");
}
return 0;
}
