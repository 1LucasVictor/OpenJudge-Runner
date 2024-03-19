#include<stdio.h>

main(){

int x,y,z,temp;

scanf("%d %d %d",&x,&y,&z);

if(x>y){
temp=x;
x=y;
y=temp;
}

if(y>z){
temp=y;
y=z;
z=temp;
}

if(x>y){
temp=x;
x=y;
y=temp;
}


printf("%d %d %d\n",x,y,z);

return 0;
}