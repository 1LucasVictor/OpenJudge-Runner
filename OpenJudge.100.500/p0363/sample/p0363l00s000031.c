#include<stdio.h>
int main(){
int a,b,c,temp;
scanf("%d%d%d",&a,&b,&c);
if(a>b){
b = temp;
b = a;
a = temp;
}
if(b>c){
temp = c;
c = b;
b = temp;
}
if(a>b){
b = temp;
b = a;
a = temp;
}
printf("%d %d %d\n",a,b,c);
return 0;
}