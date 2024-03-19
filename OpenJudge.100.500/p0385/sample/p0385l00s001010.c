#include<stdio.h>
int main(){
int a=0,c=0,d=0;
while(1){
scanf("%d",&a);
c=0;
if(a==0)
break;
while(1){
c+=a%10;
a/=10;
if(a==0)
break;
}
printf("%d\n",c);
}
return 0;
}