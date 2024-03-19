#include<stdio.h>
int main(void){
int x,y,z;
int tmp;
scanf("%d %d %d",&x,&y,&z);
if(y < x){
tmp = y;
y = x;
x = tmp;
}
if(z < x){
tmp = z;
z = x;
x = tmp;
}
if(z < y){
tmp = z;
z = y;
y = tmp;
}
printf("%d %d %d\n",x,y,z);
return 0;
}
