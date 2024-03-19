#include<stdio.h>
int main(void){int a,b,i,c,d=0;
scanf("%d%d",&a,&b);
for(i=0;i<b;i++){scanf("%d",&c);if(c>d){d=c;}}
puts(a>2*d?"No":"Yes");
return 0;}
