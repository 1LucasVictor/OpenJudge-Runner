#include<stdio.h>
int main(void){
int a,b,c,sub=0;
scanf("%d %d %d",&a,&b,&c);
if(a>c){
sub=a;
a=c;
c=sub;
}
if(a>b){
sub=a;
a=b;
b=sub;
}
if(b>c){
sub=b;
b=c;
c=sub;
}
printf("%d %d %d\n",a,b,c);
return 0;
}