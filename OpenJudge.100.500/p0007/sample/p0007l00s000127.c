#include<stdio.h>
int main(){
int a,b,c,d,n,x=0,count=0;

while((scanf("%d",&n))!=EOF){
for(a=0;a<=9;a++){
for(b=0;b<=9;b++){
for(c=0;c<=9;c++){
for(d=0;d<=9;d++){
x=a+b+c+d;
if(x==n){
count++;
}
}
}
}
}
printf("%d\n",count);
count=0;
x=0;
}
return 0;
}