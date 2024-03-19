#include<stdio.h>
int main(void){
int x=1,y=1;
int temp;
int r=0;

scanf("%d",&x);
scanf("%d",&y);
if(x<y){
temp=x;
x=y;
y=temp;
}

r=x%y;
while(r!=0){
x=y;
y=r;
r=x%y;
}
printf("%d\n",y);
return 0;
}
