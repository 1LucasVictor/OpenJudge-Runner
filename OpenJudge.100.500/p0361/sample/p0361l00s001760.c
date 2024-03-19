#include<stdio.h>
int main(void){
int a=0,b=0,c,i;
scanf("%d",&c);
for(i=0;i<24;i++){
if(c>=3600){
c-=3600;
a+=1;
}
}
for(i=0;i<60;i++){
if(c>=60){
c-=60;
b+=1;
}
}
printf("%d:%d:%d\n",a,b,c);
return 0;
}